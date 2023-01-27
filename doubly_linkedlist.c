#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* prev;
    struct node* next;
};
struct node* head;
struct node* ptr;
void CreateList(int n){
    int val;
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    printf("Enter data in node 1: ");
    scanf("%d",&val);
    new_node->prev=NULL;
    new_node->data=val;
    new_node->next=NULL;
    head=new_node;
    ptr=head;
    for(int i=2;i<=n;i++){  
        struct node* new_node=(struct node*)malloc(sizeof(struct node));
        printf("Enter data in node %d: ",i);
        scanf("%d",&val);
        new_node->prev=ptr;
        new_node->data=val;
        new_node->next=NULL;
        ptr=new_node;
    }
}
void PrintList_Forward(){
    struct node* p=head;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
        // r=r->next;
    }
    printf("%d ",p->data);
    printf("\n");

}
void PrintList_Backward(){
    struct node* q=ptr;
    while(q!=NULL){
        printf("%d ",q->data);
        q=q->prev;
    }
    printf("\n");
}
int main(){
    CreateList(5);
    PrintList_Forward();
    PrintList_Backward();
    return 0;
}