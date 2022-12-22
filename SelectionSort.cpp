#include<bits/stdc++.h>
using namespace std;
void ss(int*a,int n){
    int k;
    for(int i=0;i<n-1;i++){
        k=i;
        for(int j=i+1;j<n;j++)if(a[j]<a[k])k=j;int t=a[i];a[i]=a[k],a[k]=t;
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array:\n",cin>>n;
    int a[n];
    cout<<"Enter the elements:\n";
    for(int i=0;i<n;i++)cin>>a[i];
    ss(a,n);
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    return 0;
}