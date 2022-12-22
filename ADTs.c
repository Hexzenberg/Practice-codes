#include<stdio.h>
#include<stdlib.h>
struct a{
    int n,m;
    int *p;
};
void set(){
    int a,b;
    printf("Enter the size of the array and the used size of the array:\n");
    scanf("%d%d",&a,&b);
    struct a *x;
    x->n=a;
    x->m=b;
    x->p=(int*)malloc(a*sizeof(int));
    for(int i=0;i<b;i++){
        printf("Enter the element number (%d):",i+1);
        scanf("%d",&(x->p)[i]);
    }
}
void disp(){
    struct a *x;
    printf("The entered array is:\n");
    for(int i=0;i<(x->m);i++){
        printf("The element %d is: %d\n",i+1,(x->p)[i]);
    }
}
int main(){
    set();
    disp();
    return 0;
}