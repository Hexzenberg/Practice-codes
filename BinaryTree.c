#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int a;
    struct node*r,*l;
}sn;
void pr(sn*root){//pre-order traversal:Root->Left->Right
    if(root==NULL)return;
    printf("%d ",root->a),pr(root->l),pr(root->r);
}
void po(sn*root){//post-order traversal:Left->Right->Root
    if(root==NULL)return;
    po(root->l),po(root->r),printf("%d ",root->a);
}
void in(sn*root){//in-order traversal:Left->Root->Right
    if(root==NULL)return;
    in(root->l),printf("%d ",root->a),in(root->r);
}
sn*cr(){
   int x;sn*cur=malloc(sizeof(sn));
   scanf("%d",&x);
   if(x==-1)return NULL;
   cur->a=x; 
   printf("Left child of %d:\n",x);
   cur->l=cr(); 
   printf("Right child of %d:\n",x);
   cur->r=cr();
   return cur; 
}
int main(){
    sn*root=NULL;root=cr();
    printf("In-order:\n"),in(root),printf("\nPre-order:\n"),pr(root),printf("\nPost-order:\n"),po(root);
}