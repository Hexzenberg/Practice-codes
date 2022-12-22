#include<stdio.h>
#include<stdlib.h>
struct s{
    int b,t,*a;
};
int e(struct s*p){
    return((p->t==0)?1:0);
}
int f(struct s*p){
    return((p->t==p->b-1)?1:0);
}
int st(struct s*p){
    return p->a[p->t];
}
int sb(struct s*p){
    return p->a[0];
}
int main(){
    struct s p;
    printf("Enter the size of the array:");
    scanf("%d",&p.b);
    p.t=0;
    p.a=(int*)malloc(p.b*sizeof(int));
    printf((e(&p)==0)?"The stack is not empty\n":"Stack underflow\n");
    printf("Enter the elements of the array:\n");
    for(int i=0;i<p.b;i++){
        scanf("%d",&p.a[i]);
        p.t++;
        }
    printf((f(&p)==0)?"The stack is not full\n":"Stack overflow\n");
    printf("The elements of the array are:\n");
    for(int i=0;i<p.b;i++)printf("%d",p.a[i]);
    if(e(&p)==0)p.t=p.t-1;
    printf("\nThe elements of the array are:\n");
    for(int i=0;i<p.t;i++)printf("%d",p.a[i]);
    printf("The topmost element of the stack is %d and the bottom-most element of the stack is %d",st(&p),sb(&p));
    return 0;
}