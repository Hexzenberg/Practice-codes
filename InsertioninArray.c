#include<stdio.h>
#include<stdlib.h>
void disp(int a[],int m){
    for (int i=0;i<m;i++){
        printf("The value of the element at index %d is %d:\n",i+1,a[i]);
    }
    
}
int in(int a[],int n,int m,int e,int s){
    if(m==n||s>=n)return 0;
    else if(s<=m){
        for(int i=s;i<m+1;i++){
            a[i+1]=a[i];
        }
        a[s]=e;
    }
    else if(s>m){
        for(int i=m-1;i<s;i++){
            a[i]=a[i+1];
        }
        a[s]=e;
    }
}
int main(){
    int n,e,m,s;
    printf("Enter the total size of the array and the used size of the array:");
    scanf("%d%d",&n,&m);
    int *a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<m;i++){
        printf("Enter the element %d:",i+1);
        scanf("%d",&a[i]);
    }
    disp(a,m);
    printf("Enter the element to be inserted and the index at which it has to be inserted:");
    scanf("%d%d",&e,&s);
    ((in(a,n,m,e,s)==0)?printf("Insertion failed"):disp(a,(m+1)));
    return 0;
}