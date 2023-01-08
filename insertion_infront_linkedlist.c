#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void push(struct node** head_ref, int new_data){
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}
void printList(struct node* n){
    while(n!=NULL){
        printf("%d ",n->data);
        n=n->next;
    }
}
int main(){
    struct node* head=NULL;
    struct node* second=NULL;
    struct node* third=NULL;
    struct node* fourth=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    head->data=21; //Similar to (*head).data=1;
    head->next=second; //Similar to (*head).next=second;
    second->data=17; //Similar to (*second).data=3;
    second->next=third; //Similar to (*second).next=third;
    third->data=26;
    third->next=fourth;
    fourth->data=13;
    fourth->next=NULL;
    push(&head,46);
    printList(head);
    return 0;
}
