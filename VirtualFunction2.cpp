#include<bits/stdc++.h>
using namespace std;
class V{
    protected:
        string s;
        float r;
    public:
        V(string s1,float r1){
            s=s1;
            r=r1;
        }
        virtual void disp(){}
};
class S:public V{
    float l;
    public:
        S(string s1, float r1, float l):V(s1,r1){
            this->l=l;
        }
        void disp(){
            cout<<"The title of the movies/series/anime is: "<<s<<"\nThe rating of the movie/series/anime is: "
            <<r<<" out of 5 stars."<<"\nThe Runtime of the movie/series/anime is: "<<l<<" minutes."<<'\n';
        }
};
class T:public V{
    int w;
    public:
        T(string s1,float r1,int t):V(s1,r1){
            w=t;
        }
        void disp(){
            cout<<"The title of the novel/book is: "<<s<<"\nThe rating of the novel/book is: "
            <<r<<" out of 5 stars. "<<"\nThe number of words in the novel/book are: "<<w<<" words."<<'\n';
        }
};
int main(){
    string s1,s2;
    float r1,r2,l;
    int w;
    cout<<"Enter the details:\n";
    cin>>s1>>s2>>r1>>r2>>l>>w;
    S a(s1,r1,l);
    T t(s2,r2,w);
    V *p[2];
    p[0]=&a;
    p[1]=&t;
    p[0]->disp();
    p[1]->disp();
    return 0;
}