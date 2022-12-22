#include<stdio.h>
#include<stdlib.h>
void me(int*a,int l,int m,int h){
    int i=l,j=m+1,k=l,b[100];
    while(i<=m&&j<=h){
        if(a[i]<a[j])b[k++]=a[i++];
        else b[k++]=a[j++];
        while(i<=m)b[k++]=a[i++];
        while(j<=h)b[k++]=a[j++];
    }
    for(int p=l;p<=h;p++)a[p]=b[p];
}
void ms(int*a,int l,int h){
    int m;
    if(l<h){
        m=(l+h)/2;
        ms(a,l,m);
        ms(a,m+1,h);
        me(a,l,m,h);
    }
}
int main(){
    int n;
    printf("Enter the size of the array:\n"),scanf("%d",&n);
    int*a=malloc(n*sizeof(int));
    printf("Enter the values:\n");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    ms(a,0,n-1);
    for(int i=0;i<n;i++)printf("%d ",a[i]);
    return 0;
}