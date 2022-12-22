#include<bits/stdc++.h>
using namespace std;
template<class a=int,class b=float,class c=char>
class x{
    a n;
    b m;
    c v;
    public:
        x(){
            a x;
            b s;
            c z;
            cin>>x>>s>>z;
            n=x;
            m=s;
            v=z;
        }
        void disp(){
            cout<<n<<" "<<m<<' '<<v;
        }
};
int main(){
    x<>o;
    o.disp();
    x<int,char,int>c;
    c.disp();
    return 0;
}