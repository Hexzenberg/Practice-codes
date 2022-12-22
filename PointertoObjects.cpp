#include<bits/stdc++.h>
using namespace std;
class A{
    int a,b;
    public:
        void set(){
            int c,d;
            cout<<"Enter the numbers: ";
            cin>>c>>d;
            a=c;
            b=d;
        }
        void sum(){
            cout<<"The sum of the entered numbers is: "<<a+b<<endl;
        }
};
int main(){
    int n;
    cout<<"Enter the number of sums you want: ";
    cin>>n;
    A *p=new A[n];
    A *q=p;
    for(int i=0;i<n;i++){
        p->set();
        p++;
    }
    for(int i=0;i<n;i++){
        q->sum();
        q++;
    }
    return 0;
}