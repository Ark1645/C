#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node{
    int key;
    struct node* next;
};
void push(struct node** head_ref,int new_key){
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node->key=new_key;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}
bool search(struct node* head,int x){
    struct node* current=head;
    while(current!=NULL){
        if(current->key==x){
            return true;
        }
    }
    return false;
}
int main(){
    struct node* head=NULL;
    int x=31;
    push(&head,10);
    push(&head,12);
    push(&head,67);
    push(&head,31);
    push(&head,42);
    search(head,31)?printf("Element found in the linked list\n"):printf("Element not found\n");
}