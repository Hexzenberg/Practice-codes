#include<bits/stdc++.h>
using namespace std;
class A{
    int a;
    public:
        A(){
            int x;
            cin>>x;
            a=x;
            cout<<"Class A constructor is called."<<'\n';
        }
        void disa(){
            cout<<"The first entered value is: "<<a<<endl;
        }
};
class B{
    int b;
    public:
        B(){
            int y;
            cin>>y;
            b=y;
            cout<<"Class B constructor is called."<<'\n';
        }
        void disb(){
            cout<<"The second entered value is: "<<b<<endl;
        }
};
class C:public A,public B{
    int c;
    public:
        C():A(),B(){
            int n,m,z;
            cin>>z;
            c=z;
            cout<<"Class C constructor is called."<<'\n';
        }
        void disp(){
            disa();
            disb();
            cout<<"The third enetered value is: "<<c<<endl;
        }
};
int main(){
    C s;
    s.disp();
    return 0;
}