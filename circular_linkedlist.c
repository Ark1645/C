#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* head;
struct node* ptr;
void createList(int n){
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    int val;
    printf("Enter data in node 1: ");
    scanf("%d",&val);
    new_node->data=val;
    head=new_node;
    ptr=head;
    for(int i=2;i<=n;i++){
        struct node* new_node=(struct node*)malloc(sizeof(struct node));
        printf("Enter data in node %d: ",i);
        scanf("%d",&val);
        new_node->data=val;
        ptr->next=new_node;
        ptr=new_node;
    }
    ptr->next=head;
}
void PrintList(){
    struct node* p=head;
    do{
        printf("%d ",p->data);
        p=p->next;
    }
    while(p!=head);
}
void insert_in_beginning(int val){
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=val;
    struct node* p=head->next;
    while(p->next!=head){
        p=p->next;
    }
    p->next=n;
    n->next=head;
    head=n;
}
int main(){
    createList(5);
    PrintList();
    insert_in_beginning(3);
    printf("\n");
    PrintList();
    return 0;
}