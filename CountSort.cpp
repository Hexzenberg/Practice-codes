#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
void disp(vll v,ll n){for(ll i=0;i<n;i++)cout<<v[i]<<" ";cout<<'\n';}
int max(vll&v,ll n){
    int m=INT_MIN;
    for(int i=0;i<n;i++)if(v[i]>m)m=v[i];
    return m;
}
void cs(vll&v,ll n){
    int m=max(v,n),i,j;
    vll a(m+1);
    for(i=0;i<n;i++)a[i]=0;
    for(i=0;i<n;i++)a[v[i]]++;
    i=j=0;
    while(i<m+1)(a[i]>0)?v[j++]=i,a[i]--:i++;
}
int main(){
    ll n;
    cout<<"Enter the size of the array:\n",cin>>n,cout<<"Enter the elements of the array:\n";
    vll v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    cs(v,n),disp(v,n);
    return 0;
}
