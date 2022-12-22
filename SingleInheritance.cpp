#include<bits/stdc++.h>
using namespace std;
class one{
    int a;
    public:
        int c;
        void set(){
            cin>>c;
            a=c;
        }   
};
class two:public one{
    int b;
    public:
        int d;
        void set2(){
            cin>>d;
            b=d;
        }
        void mul();
};
void two::mul(){
    cout<<b*c<<endl;
}
int main(){
    two s;
    s.set();
    s.set2();
    s.mul();
    return 0;
}