#include<bits/stdc++.h>
using namespace std;
template <class T>
class Vector{
    public:
    T* a;
    int size;
        Vector(){
            int b;
            cout<<"Enter the size of your vector:"<<'\n';
            cin>>b;
            size=b;
            a = new T[size];
            cout<<"Enter the elements of your vector:"<<'\n';
            for(int i=0;i<size;i++){
                cin>>a[i];
            }
        }
        T dp(Vector &v){
            T c=0;
            for (int i=0;i<size;i++){
                c+=(*a**(v.a));
            }
            return c;
        }
};
int main(){
    Vector <int> v1;
    Vector <int> v2;
    cout<<"The dot product of the vectors entered by you is: "<<v1.dp(v2);
    return 0;
}