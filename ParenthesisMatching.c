#include<stdio.h>
#include<stdlib.h>
struct ll{
    char c;
    struct ll*n;
};
struct ll*t=NULL;
int e(struct ll*t){
    if(t==NULL)return 1;
    return 0;
}
int f(struct ll*t){
    struct ll*n=(struct ll*)malloc(sizeof(struct ll));
    if(n==NULL)return 1;
    return 0;
}
struct ll*pu(struct ll*t,int a){
    if(f(t))printf("Stack Overflow!\n");
    else{
        struct ll*p=(struct ll*)malloc(sizeof(struct ll));
        p->c=a;
        p->n=t;
        t=p;
        return t;
    }
}
char po(struct ll*tp){
    if(e(tp))printf("Stack Underflow!\n");
    else{
        struct ll*p=tp;
        t=tp->n;
        free(p);
    }
}
int pa(char*c){
    for(int i=0;c[i]!='\0';i++){
        if(c[i]=='(')t=pu(t,'(');
        else if(c[i]==')'){
            if(e(t))return 0;
            po(t);
        }
    }
    return(e(t)?1:0);
}
int main(){
    char*c="((r*c))";
    printf(pa(c)?"The parenthesis are matched.":"The parenthesis are not matched.");
    return 0;
}