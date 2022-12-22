#include<bits/stdc++.h>
using namespace std;
class Complex;
class sub{
    public:
    void su(Complex c);
};
class Complex{
    int a,b;
    friend Complex add(Complex);
    friend void sub::su(Complex c);
    public:
    void setdata();
};
void Complex::setdata(){
    int c,d;
    cin>>c;
    a=c;
    cin>>d;
    b=d;
}
Complex add(Complex c){
    cout<<c.a+c.b<<'\n';
}
void sub::su(Complex c){
    cout<<c.a-c.b;
}
int main(){
    Complex c,s;
    sub p;
    c.setdata();
    s=add(c);
    p.su(c);
    return 0;
}