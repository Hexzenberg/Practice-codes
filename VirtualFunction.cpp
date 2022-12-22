#include<bits/stdc++.h>
using namespace std;
class A{
    protected:
        int a,b;
    public:
        void set(){
            int c,d;
            cout<<"Enter the numbers: "<<endl;
            cin>>c>>d;
            a=c;
            b=d;
        }
        virtual void dis(){
            cout<<a+b;
        }
};
class B:public A{
    void dis(){
        cout<<a*b;
    }
};
int main(){
    A *p;
    B n;
    p=&n;
    p->set();
    p->dis();
    return 0;
}