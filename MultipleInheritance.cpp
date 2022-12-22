#include<bits/stdc++.h>
using namespace std;
class A{
    protected:
        int a;
    public:
        void seta(int c){
            a=c;
        }
};
class B{
    protected:
        int b;
    public:
        void setb(int d){
            b=d;
        }
};
class C:public A, public B{
    public:
        void showc(){
            cout<<"The value of a and b is: "<<a<<" and "<<b<<". The value of their sum is: "<<a+b<<endl;
        }
};
int main(){
    C n;
    n.seta(10);
    n.setb(20);
    n.showc();
    return 0;
}