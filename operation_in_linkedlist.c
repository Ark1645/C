#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
}*fsnode;
void createNode(int n){
	struct node *temp,*strnode;
	int num;
	fsnode=(struct node*)malloc(sizeof(struct node));
	if(fsnode==NULL){
		printf("Memory cannot be allocated\n");
	}
	else{
		printf("Insert data in node 1: ");
		scanf("%d",&num);
		fsnode->data=num;
		fsnode->next=NULL;
		temp=fsnode;
		for(int i=2;i<=n;i++){
			strnode=(struct node*)malloc(sizeof(struct node));
			if(strnode==NULL){
				printf("Memory cannot be allocated\n");
				break;
			}
			else{
				printf("Insert data in node %d: ",i);
				scanf("%d",&num);
				strnode->data=num;
				strnode->next=NULL;
				temp->next=strnode;
				temp=strnode;
			}
		}
	}
}
void addFirst(int new_data){
	struct node *first_node=(struct node*)malloc(sizeof(struct node));
	first_node->data=new_data;
	first_node->next=fsnode;
	fsnode=first_node;
}
void addLast(int new_data){
	struct node *last_node=(struct node*)malloc(sizeof(struct node));
	struct node *temp;
	temp=fsnode;
	last_node->data=new_data;
	last_node->next=NULL;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=last_node;
	temp=last_node;
}
void addMiddle(int new_data,int pos){
	struct node *middle_node=(struct node*)malloc(sizeof(struct node));
	struct node *temp;
	middle_node->data=new_data;
	middle_node->next=NULL;
	temp=fsnode;
	if(pos<=1){
		printf("Insertion is not possible to this given position\n");
	}
	else{
		for(int i=2;i<=pos-1;i++){
			temp=temp->next;
			if(temp->next==NULL){
				break;
			}
		}
		if(temp->next!=NULL){
			middle_node->next=temp->next;
			temp->next=middle_node;
		}
		else{
			printf("Insertion is not possible to the given position\n");
		}
	}	
}
void printList(){
	struct node *temp;
	if(fsnode==NULL){
		printf("No data is found\n");
	}
	else{
		temp=fsnode;
		while(temp!=NULL){
			printf("%d ",temp->data);
			temp=temp->next;
    	}
		printf("\n");
	}
}
int main(){
	int n,new_data,pos,op=1;
	printf("Enter how many nodes you want to create: ");
	scanf("%d",&n);
	createNode(n);
	// while(op!=0){
	// 	printf("\n1 for Display\n");
	// 	printf("2 for Inserting Node infront of List\n");
	// 	printf("3 for Inserting Node at the end of List\n");
	// 	printf("0 for Exit\n");
	// 	printf("\nPress any of these keys to Continue ");
	// 	scanf("%d",&op);
	// 	switch(op){
	// 		case 1:
	// 			printf("The required Linkedlist created is: ");
	// 			printList();
	// 			break;
	// 		case 2:
	// 			printf("Enter the data in new_node you want to insert infront of linked list: ");
	// 			scanf("%d",&new_data);
	// 			addFirst(new_data);
	// 			printf("The Updated Linked List is: ");
	// 			printList();
	// 			break;
	// 		case 3:
	// 			printf("Enter the data in new_node you want to insert in the last of linked list: ");
	// 			scanf("%d",&new_data);
	// 			addLast(new_data);
	// 			printf("The Updated Linked list is: ");
	// 			printList();
	// 			break;
	// 		case 0:
	// 			printf("Thank You Have A Nice Day!");
	// 			break;
	// 		default:
	// 			printf("Enter a valid key: ");
	// 	}
	// }
	printList();
	printf("Enter data in new node and it's position: ");
	scanf("%d%d",&new_data,&pos);
	addMiddle(new_data,pos);
	printf("The Updated Linkedlist is: ");
	printList();
	return 0;
}
