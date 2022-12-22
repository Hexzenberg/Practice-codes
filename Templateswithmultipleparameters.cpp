#include<bits/stdc++.h>
using namespace std;
template <class T1,class T2>
class Vector{
    T1 a;
    T2 b;
    public:
    Vector(T1 c,T2 d){
        a=c;
        b=d;
    }
    void disp(){
        cout<<a<<' '<<b;
    }
};
int main(){
    Vector<int,char>v(1,'c');
    v.disp();
    return 0;
}