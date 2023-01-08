#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* fn_node;
void createnode(int n){
    int num,i;
    struct node* temp;
    fn_node=(struct node*)malloc(sizeof(struct node));
    if(fn_node==NULL){
        printf("Memory cannot be allocated\n");
    }
    else{
        printf("Enter data in node 1: ");
        scanf("%d",&num);
        fn_node->data=num;
        fn_node->next=NULL;
        temp=fn_node;
        for(i=2;i<=n;i++){
            struct node* new_node=(struct node*)malloc(sizeof(struct node));
            if(new_node==NULL){
                printf("Memory cannot be allocated\n");
            }
            else{
                printf("Enter data in node %d: ",i);
                scanf("%d",&num);
                new_node->data=num;
                new_node->next=NULL;
                temp->next=new_node;
                temp=new_node;
            }
        }
    }
}
void printList(){
    struct node* temp;
    if(fn_node==NULL){
        printf("List is empty\n");
    }
    else{
        temp=fn_node;
        while(temp->next!=NULL){
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("%d->NULL\n",temp->data);
    }
}
void searching(int value){
    struct node* temp;
    temp=fn_node;
    int c=0;
    while(temp!=NULL){
        if(value==temp->data){
            printf("Node is found\n");
            c=1;
            break;
        }
        temp=temp->next;
    }
    if(c==0){
        printf("Node is not found\n");
    }
}
int main(){
    int n,val;
    printf("How many node you want to create? ");
    scanf("%d",&n);
    createnode(n);
    printf("The created list is: ");
    printList();
    printf("Enter the node to be searched: ");
    scanf("%d",&val);
    searching(val);
    return 0;
}