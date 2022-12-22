#include<stdio.h>
#include<stdlib.h>
void is(int*a,int n){
    int k,j;
    for(int i=1;i<n;i++){
        k=a[i],j=i-1;
        while(j>=0&&a[j]>k){
            a[j+1]=a[j];
            j--;
        }
        a[++j]=k;
    }
}
void p(int*a,int n){for(int i=0;i<n;i++)printf("%d",a[i]);printf("\n");}
int main(){
    int n;
    printf("Enter the size of the array:\n"),scanf("%d",&n);
    int*a=malloc(n*sizeof(int));
    printf("Enter the values of the array:\n");
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    is(a,n),p(a,n);
    return 0;
}