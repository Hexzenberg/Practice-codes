#include<bits/stdc++.h>
using namespace std;
class S{
    protected:
        int r;
    public:
        int a;
        void set(){
            cin>>a;
            r=a;
        }
        void dis1(){
            cout<<"Your roll number is: "<<r<<endl;
        }
};
class Sb:virtual public S{
    protected:
        float m1,m2;
    public:
        void setm(){
            float a,b;
            cin>>a>>b;
            m1=a;
            m2=b;
        }
        void dis2(){
            cout<<"Your marks in Subject 1: "<<m1<<" out of 100 and Your marks in subject 2: "
            <<m2<<" out of 100."<<endl;
        }
};
class sp:virtual public S{
    protected:
        float s;
    public:
        void sets(){
            int a;
            cin>>a;
            s=a;
        }
        void dis3(){
            cout<<"Your score in sports is: "<<s<<" out of 10."<<endl;
        }
};
class R:public sp,public Sb{
    protected:
        float f;
    public:
        void disp(){
            dis1();
            dis2();
            dis3();
            cout<<"Your total result is:"<<s+m1+m2<<" out of 210."<<endl;
        }
};
int main(){
    R n;
    n.set();
    n.setm();
    n.sets();
    n.disp();
    return 0;
}