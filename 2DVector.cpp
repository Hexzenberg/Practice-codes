#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> v;
    int n,e;
    cout<<"Enter the length of the vector: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        vector<int>v1;
        for(int j=0;j<n;j++){
            cin>>e;
            v1.push_back(e);
        }
        v.push_back(v1);
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            cout<<v[i][j];
        }cout<<endl;
    }
    return 0;
}