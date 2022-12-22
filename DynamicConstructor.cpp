#include<bits/stdc++.h>
using namespace std;
class Calculate{
    int p,q,x;
    float r,s,y;
    friend int calc(Calculate);
    friend int cal(Calculate);
    public:
        Calculate(){}
        Calculate(int,int);
        Calculate(float,float);
};
Calculate::Calculate(int a,int b){
    p=a;
    q=b;
    x=p+q;
}
Calculate::Calculate(float c,float d){
    r=c;
    s=d;
    y=r+s;
}
int calc(Calculate s){
    cout<<s.x<<endl;
}
int cal(Calculate s){
    cout<<s.y<<endl;
}
int main(){
    Calculate x,y;
    int a,b;
    float c,d;
    cin>>a>>b>>c>>d;
    x=Calculate(a,b);
    y=Calculate(c,d);
    calc(x);
    cal(y);
    return 0;
}