#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
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
    printf("%d\n",sizeof(struct node));
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    head->data=1; //Similar to (*head).data=1;
    head->next=second; //Similar to (*head).next=second;
    second->data=3; //Similar to (*second).data=3;
    second->next=third; //Similar to (*second).next=third;
    third->data=20; //Similar to (*third).data=7;
    third->next=fourth; //Similar to (*third).next=NULL;
    fourth->data=5;
    fourth->next=NULL;
    printList(head);
    return 0;
}
