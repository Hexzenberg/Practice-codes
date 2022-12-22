#include<bits/stdc++.h>
using namespace std;
class st{
    int r;
    public:
        int a;
        void getr(){
            cin>>a;
            r=a;
        }
        void pr(){
            cout<<"Roll Number of the student is:"<<r<<endl;
        }
};
class m:public st{
    float x,y;
    public:
            float c,d;
        void getm(){
            cin>>c>>d;
            x=c;
            y=d;
        }
}; 
class p:public m{
    float p;
    public:
        void calp(){
            cout<<"The percentage of the student is:"<<(c+d)/2<<"%"<<endl;
        }
};
int main(){
    p a;
    a.getr();
    a.pr();
    a.getm();
    a.calp();
    return 0;
}