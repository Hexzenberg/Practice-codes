#include<bits/stdc++.h>
using namespace std;
class age{
    int a;
    friend class disp;
    public:
    void setage(){
        int b;
        cin>>b;
        a=b;
    }
};
class disp{
    public:
    void display(age);
};
void disp::display(age c){
    if(c.a<60 && c.a>18){
        cout<<"Working age";
    }else if(c.a>60){
        cout<<"Retired";
    }else{
        cout<<"Growing";
    }
}
int main(){
    age a;
    disp b;
    a.setage();
    b.display(a);
    return 0;
}