#include<bits/stdc++.h>
using namespace std;
int pn(int*a,int l,int h){
    int pi=a[l],i=l+1,j=h;
    do{
    while(a[i]<pi)i++;
    while(a[j]>pi)j--;
    if(i<j){int t=a[i];a[i]=a[j],a[j]=t;}
    }while(i<j);
    int t=a[l];a[l]=a[j],a[j]=t;
    return j;
}
void qs(int*a,int l,int h){
    int p;
    if(l<h){
        p=pn(a,l,h);
        qs(a,l,p-1);
        qs(a,p+1,h);
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array:\n",cin>>n;
    int a[n];
    cout<<"Enter the elements:\n";
    for(int i=0;i<n;i++)cin>>a[i];
    qs(a,0,n-1);
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    return 0;
}