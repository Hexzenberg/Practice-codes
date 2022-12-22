#include<bits/stdc++.h>
using namespace std;
class A{
    public:
        int a,b;
        int *p;
        void set(A *e);
        void disp();
};
void A::set(A *e){
    int c,d;
    cout<<"Enter the total size of the array and the used size of the array:"<<endl;
    cin>>c>>d;
    a=c;
    b=d;
    e->p=new int[c];
    for(int i=0;i<b;i++){
        cout<<"Enter the value of the element ("<<i+1<<"):"<<endl;
        cin>>(e->p[i]);
    }
}
void A::disp(){
    cout<<"The entered array is:\n";
    for(int i=0;i<b;i++){
        cout<<"The vale of element ("<<(i+1)<<"): "<<p[i]<<endl;
    }
}
int32_t main(){
    A n;
    n.set(&n);
    n.disp();
    return 0;
}