#include<stdio.h>
#include<stdlib.h>
void disp(int a[],int m){
    for (int i=0;i<m;i++){
        printf("The value of the element at index %d is %d:\n",i+1,a[i]);
    } 
}
int id(int a[],int n,int m,int s){
    if(s>=n)return 0;
    for(int i=s;i<m-1;i++)a[i]=a[i+1];
    return 1;
}
int main(){
    int n,m,s;
    printf("Enter the total size of the array and the used size of the array:");
    scanf("%d%d",&n,&m);
    int *a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<m;i++){
        printf("Enter the element %d:",i+1);
        scanf("%d",&a[i]);
    }
    disp(a,m);
    printf("Enter the index at which the element is needed to be deleted:");
    scanf("%d",&s);
    ((id(a,n,m,s)==0)?printf("Deletion failed"):disp(a,(m-1)));
    return 0;
}