#include<stdio.h>
void insert(int*a,int n){
    int t,i=n;t=a[n];
    while(i>1&&t>a[i/2])a[i]=a[i/2],i/=2;
    a[i]=t;
}
void delete(int*a,int n){
    int x,i,j;x=a[1],a[1]=a[n],i=1,j=2*i;
    while(j<n-1){
        if(a[j+1]>a[j])j++;
        if(a[i]<a[j]){int t=a[i];a[i]=a[j],a[j]=t,i=j,j*=2;}
        else break;
    }a[n]=x;   
}
int main(){
    int a[]={0,10,20,30,25,5,40,35};
    for(int i=2;i<=7;i++)insert(a,i);
    for(int i=1;i<=7;i++)printf("%d ",a[i]);printf("\n");
    for(int i=7;i>1;i--)delete(a,i);
    for(int i=1;i<=7;i++)printf("%d ",a[i]);
    return 0;
}