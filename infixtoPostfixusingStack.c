#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct s{
    int b,t;
    char*a;
};
int e(struct s*p){
    return((p->t==-1)?1:0);
}
int f(struct s*p){
    return((p->t==p->b-1)?1:0);
}
void pu(struct s*p,int v){
    if(f(p))printf("Stack overflow, the value %d cannot be pushed into the stack.\n",v);
    else{
        p->t++;
        p->a[p->t]=v;
    }
}
char po(struct s*p){
    if(e(p))return -1;
    else{
        char v=p->a[p->t];
        p->t--;
        return v;
    }
}
int st(struct s*p){
    return p->a[p->t];
}
int pr(char a){
    return((a=='*'||a=='/')?3:((a=='+'||a=='-')?2:0));
}
int io(char a){
    return((a=='*'||a=='/'||a=='+'||a=='-')?1:0);
}
char*ip(char*c){
    int i=0,j=0;
    struct s*p=(struct s*)malloc(sizeof(struct s));
    p->b=20;
    p->t=-1;
    p->a=malloc(p->b*sizeof(char));
    char*q=malloc((strlen(c)+1)*sizeof(char));
    while(c[i]!='\0'){
        if(!io(c[i])){
            q[j]=c[i];
            j++;
            i++;
        }else{
            if(pr(c[i])>pr(st(p))){
                pu(p,c[i]);
                i++;
            }else{
                q[j]=po(p);
                j++;
            }
        }
    }
    while(!e(p)){
        q[j]=po(p);
        j++;
    }
    q[j]='\0';
    return q;
}
int main(){
    char*c="8+9/9+1";
    printf("Infix: %s to postfix conversion: %s",c,ip(c));
    return 0;
}