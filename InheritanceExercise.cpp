/*
Create two classes:
    1. SimpleCalculator - Takes input of two numbers using a utility function and performs +,-,*,/ 
    and displays the results using another function.
    2. ScientificCalculator - Takes input of two numbers using a utility function 
    and performs any four scientific operation of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these two classes.
*/
#include<bits/stdc++.h>
using namespace std;
class SimpleCalculator{
    private:
        int a,b;
    public:
        int c,d; 
        void geta(){
            cout<<"Enter the numbers:"<<endl;
            cin>>c>>d;
            a=c;
            b=d;
        }
        void calca(){
            cout<<"The result of the calculations are as shown: a+b="<<a+b<<" a-b="<<a-b<<" a*b="<<a*b<<" a/b="<<a/b<<endl;
        }
};
class ScientificCalculator{
    private:
        int x,y;
    public:
        int n,m;
        void getb(){
            cout<<"Enter the numbers:"<<endl;
            cin>>n>>m;
            x=n;
            y=m;
        }
        void calcb(){
            cout<<"The result of the calculations are as shown: x^y="<<pow(x,y)<<" x^1/2="<<sqrt(x)<<" y^1/2="<<sqrt(y)<<endl;
        }
};
class HybridCalculator:public SimpleCalculator,public ScientificCalculator{
    /*Multiple Inheritance is used here.*/
};
int main(){
    HybridCalculator a;
    a.geta();
    a.calca();
    a.getb();
    a.calcb();
    return 0;
}