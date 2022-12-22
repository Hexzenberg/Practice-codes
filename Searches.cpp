#include<bits/stdc++.h>
using namespace std;
int ls(vector<int>a,int n,int e){
    for(int i=0;i<n;i++)if(a[i]==e)return i;
    return -1;
}
int bs(vector<int>a,int n,int e){
    int l=0,h=n-1,m=(l+h)/2;
    for(int i=l;i<h;i++){
        if(a[i]==e)return i;
        if(e>a[m])l=m+1;
        else if(e<a[m])h=m-1;
    }
    return -1;
}
int main(){
    int n,e;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    vector<int>a(n);
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++)cin>>a[i];
    cout<<"Enter the element to be searched:"<<endl;
    cin>>e;
    sort(a.begin(),a.end());
    cout<<"The index of the element searched by linear search is:"<<ls(a,n,e)<<endl;
    cout<<"The index of the element searched by binary search is:"<<bs(a,n,e)<<endl;
    return 0;
}