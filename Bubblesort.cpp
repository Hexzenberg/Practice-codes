#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
void disp(vll v,ll n){for(ll i=0;i<n;i++)cout<<v[i]<<" ";cout<<'\n';}
void bs(vll&v,ll n){
    ll t,s=0;
    for(ll i=0;i<n-1;i++){
        cout<<"Working on pass number: "<<i+1<<'\n';
        s=1;
        for(ll j=0;j<n-1-i;j++){
            if(v[j]>v[j+1]){
                t=v[j];
                v[j]=v[j+1];
                v[j+1]=t;
                s=0;
            }
        }if(s)return;
    } 
}
int main(){
    ll n;
    cout<<"Enter the size of the array:\n",cin>>n,cout<<"Enter the elements of the array:\n";
    vll v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    cout<<"Before sorting:\n",disp(v,n),bs(v,n),cout<<"After sorting:\n",disp(v,n);
    return 0;
}
