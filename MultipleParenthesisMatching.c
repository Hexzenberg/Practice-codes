#include<stdio.h>
#include<stdlib.h>
struct Node{
    char data;
    struct Node*next;
};
struct Node*t=NULL;
int e(struct Node*t){
    if(t==NULL)return 1;
    return 0;
}
int f(struct Node*t){
    struct Node*next=(struct Node*)malloc(sizeof(struct Node));
    if(next==NULL)return 1;
    return 0;
}
struct Node*pu(struct Node*t,int a){
    if(f(t))printf("Stack Overflow!\next");
    else{
        struct Node*p=(struct Node*)malloc(sizeof(struct Node));
        p->data=a;
        p->next=t;
        t=p;
        return t;
    }
}
char po(struct Node*tp){
    char a;
    if(e(tp))printf("Stack Underflow!\next");
    else{
        struct Node*p=tp;
        t=tp->next;
        a=p->data;
        free(p);
        return a;
    }
}
int ma(char a,char b){
    if(a=='('&&b==')'||a=='{'&&b=='}'||a=='['&&b==']')return 1;
    return 0;
}
int pa(char*data){
    char a;
    for(int i=0;data[i]!='\0';i++){
        if(data[i]=='('||data[i]=='{'||data[i]=='[')t=pu(t,data[i]);
        else if(data[i]==')'||data[i]=='}'||data[i]==']'){
            if(e(t))return 0;
            a=po(t);
            if(!ma(a,data[i]))return 0;
        }
    }
    return(e(t)?1:0);
}
int main(){
    char*data="([{r*data{}}])";
    printf(pa(data)?"The parenthesis are matched.":"The parenthesis are not matched.");
    return 0;
}