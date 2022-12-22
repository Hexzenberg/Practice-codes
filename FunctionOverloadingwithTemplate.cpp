#include<bits/stdc++.h>
using namespace std;
template<class T>
class c{
    T a;
    public:
        void set(){
            int a;
            cin>>a;
            this->a=a;
        }
        void disp();
        
};
template<class T>
void c<T>::disp(){
    cout<<a<<endl;
}
void fun(int a){
    cout<<"First function: "<<a<<endl;
}
template<class T>
void fun(T a){
    cout<<"Templatised function: "<<a<<endl;
}
int main(){
    c<int> v;
    cout<<"Enter a number: "<<endl;
    v.set();
    v.disp();
    fun(2);
    fun(4.5);
    return 0;
}