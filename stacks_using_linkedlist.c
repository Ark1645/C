#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* top;
void createStacks(int n){
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    int i,val;
    printf("Enter the element 1: ");
    scanf("%d",&val);
    new_node->data=val;
    new_node->next=NULL;
    top=new_node;
    for(i=2;i<=n;i++){
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("Enter the element %d: ",i);
        scanf("%d",&val);
        new_node->data=val;
        new_node->next=top;
        top=new_node;
    }
}
void printStack(){
    while(top!=NULL){
        printf("%d-->",top->data);
        top=top->next;
    }
    printf("NULL\n");
}
int main(){
    int n;
    printf("Enter the number of elements to be inserted in stacks: ");
    scanf("%d",&n);
    createStacks(n);
    printStack();
    return 0;
}s