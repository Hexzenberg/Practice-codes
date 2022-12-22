#include<bits/stdc++.h>
using namespace std;
template<class t>
void display(vector<t> &a){
    cout<<"Your vector is: "<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i];
    }
}
int main(){
    vector<int> v1;
    vector<char> v2(4);
    vector<char> v3(v2);
    int n,e;
    char a,b;
    cout<<"Enter the size of your vector: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>e;
        v1.push_back(e);
    }
    display(v1);
    for(int i=0;i<4;i++){
        cin>>a;
        v2.push_back(a);
    }
    display(v2);
    for(int i=0;i<v3.size();i++){
        cin>>b;
        v3.push_back(b);
    }
    display(v3);
    return 0;
}