#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
}*stnode;
void createNode(int n){
    stnode=(struct node*)malloc(sizeof(struct node));
    struct node *temp,*new_node;
    int i,num;
    if(stnode==NULL){
        printf("Memory cannot be allocated\n");
    }
    else{
        printf("Insert data in node 1: ");
        scanf("%d",&num);
        stnode->data=num;
        stnode->next=NULL;
        temp=stnode;
    }
    for(i=2;i<=n;i++){
        new_node=(struct node*)malloc(sizeof(struct node));
        if(new_node==NULL){
            printf("Memory cannot be allocated\n");
            break;
        }
        else{
            printf("Insert data in node %d: ",i);
            scanf("%d",&num);
            new_node->data=num;
            new_node->next=NULL;
            temp->next=new_node;
            temp=new_node;
        }
    }
}
void printList(){
    struct node *temp;
    if(stnode==NULL){
        printf("No data is found\n");
    }
    else{
        temp=stnode;
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
void Even_pos(int n,int num){
    struct node *new_node,*temp;
    temp=stnode;
    for(int i=2;i<=(n+1+(n/2));i++){
        if(i%2==0){
            new_node=(struct node*)malloc(sizeof(struct node));
            if(new_node==NULL){
                printf("Memory cannot be allocated\n");
                break;
            }
            else{
                new_node->data=num;
                new_node->next=temp->next;
                temp->next=new_node;
                temp=temp->next;
            }
        }
        else{
            temp=temp->next;
            if(temp->next==NULL){
				break;
			}
        }
    }
}
int main(){
    int n, num;
    printf("Enter the number of nodes you want to create in the list: ");
    scanf("%d",&n);
    createNode(n);
    printf("The created List is: ");
    printList();
    printf("Enter data in node to be inserted between two nodes: ");
    scanf("%d",&num);
    Even_pos(n,num);
    printf("The Updated List is: ");
    printList();
    return 0;
}