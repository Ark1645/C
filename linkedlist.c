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
    int value;
    printf("Enter data 1: ");
    scanf("%d",&value);
    new_node->data=value;
    new_node->next=NULL;
    head=new_node;
    ptr=head;
    for(int i=2;i<=n;i++){
        struct node* new=(struct node*)malloc(sizeof(struct node));
        printf("Enter data %d: ",i);
        scanf("%d",&value);
        new->data=value;
        new->next=NULL;
        ptr->next=new;
        ptr=new;
    }
}
void displayList(){
    struct node* traversal=head;
    while(traversal!=NULL){
        printf("%d->",traversal->data);
        traversal=traversal->next;
    }
    printf("NULL\n");
}
void insertion_in_beginning(int val){
    struct node* insertion=(struct node*)malloc(sizeof(struct node));
    insertion->data=val;
    insertion->next=head;
    head=insertion;
}
void insert_in_between(int val,int pos){
    int n=1;
    struct node* t1;
    t1=head;
    while(n<pos){
        t1=t1->next;
        n++;
    }
    
    struct node* n1=(struct node*)malloc(sizeof(struct node));
    n1->data=val;
    n1->next=t1->next;
    t1->next=n1;
    
}
void insert_at_end(int val){
    struct node* traversal=head;
    while(traversal->next!=NULL){
        traversal=traversal->next;
    }
    struct node* n1=(struct node*)malloc(sizeof(struct node));
    n1->data=val;
    n1->next=NULL;
    traversal->next=n1;
}
void delete_first(){
    struct node* h1=head;
    head=head->next;
    free(h1);
}
void delete_in_between(int index){
    int n=1;
    struct node* p=head;
    while(n<index){
        p=p->next;
        n++;
    }
    struct node* q=p->next;
    p->next=q->next;
    free(q);
}
void delete_from_end(){
    struct node* p=head;
    struct node* q=p->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
}
void delete_a_node_with_given_value(int val){
    struct node* p=head;
    if(p->data==val){
        head=p->next;
        free(p);
    }
    else{
        struct node* q=p->next; 
        while(q->data!=val && q->next!=NULL){
            p=p->next;
            q=q->next;
        }
        if(q->data==val){
            p->next=q->next;
            free(q);
        }
    }

}
int main(){
    int n,val,choice;
    scanf("%d",&n);
    createList(n);    
    displayList();

    //INSERTION
    // //Insert node in the beginning of the list
    // printf("Enter the element to insert: ");
    // scanf("%d",&val);
    // insertion_in_beginning(val);

    // // Insert node between the list
    // int pos;
    // printf("Enter the element and to insert and its position: ");
    // scanf("%d%d",&val,&pos);
    // insert_in_between(val,pos);

    // //Insert node at the end
    // printf("Enter the element to insert: ");
    // scanf("%d",&val);
    // insert_at_end(val);

    //DELETION
    // //Deletion the first node
    // delete_first();

    // //Delete in between the list(from an index)
    // delete_in_between(3);

    //Delete the last node
    // delete_from_end();

    //Delete a node with a given value
    delete_a_node_with_given_value(2);
    displayList();
    // displayList();
    // while(1){
    //     printf("Press 1 for insertion\nPress 2 for Deletion\nPress 3 for Exit ");
    //     scanf("%d",&choice);
    //     switch(choice){
    //         case 1:
    //             printf("Enter the element to insert: ");
    //             scanf("%d",&val);
    //             insertion(val);
    //             displayList();
    //             break;
    //         case 2:
    //             deletion();
    //             break;
    //         case 3:
    //             exit(0);
    //             break;
    //         default:
    //             printf
    //     }
    // }
    return 0;
}

// void insertnode(int value){

//     struct node* new_node=(struct node*)malloc(sizeof(struct node));
//     struct node* travel=(struct node*)malloc(sizeof(struct node));
//     if(head==NULL){
//         head->data=value;
//         head->next=NULL;
//     }
//     else{
//         travel=head;
//         new_node->data=value;
//         new_node->next=NULL;
//         while(travel->next!=NULL){
//             travel=travel->next;
//         }
//         travel->next=new_node;
//     }
// }
// void deletenode(){
//     struct node* ptr=head;
//     if(ptr==NULL){
//         printf("List is empty\n");
//     }
//     else{
//         while(ptr!=NULL){
//             ptr=ptr->next;
//             if(ptr->next==NULL){
//                 printf("Element deleted from the list: %d\n",ptr->data);
//                 free(ptr);
//                 break;
//             }
//         }
//     }
    
// }
// void displaylist(){
//     struct node* ptr=head;
//     if(ptr==NULL){
//         printf("List is empty\n");
//     }
//     else{
//         while(ptr!=NULL){
//             printf("%d->",ptr->data);
//             ptr=ptr->next;
//             if(ptr==NULL){
//                 printf("NULL\n");
//             }
//         }
//     }
    
// }
// int main(){
//     int choice,val;
//     while(1){
//         printf("1. Insert 2. Delete 3. Display 4. Exit: ");
//         scanf("%d",&choice);
//         switch(choice){
//             case 1:
//                 printf("Enter the value: ");
//                 scanf("%d",&val);
//                 insertnode(val);
//                 break;
//             case 2:
//                 deletenode();
//                 break;
//             case 3:
//                 displaylist();
//                 break;
//             case 4:
//                 exit(0);
//                 break;
//             default:
//                 printf("Invalid choice\n");
//         }
//     }
//     // struct node* head=(struct node*)malloc(sizeof(struct node));
//     // struct node* first=(struct node*)malloc(sizeof(struct node));
//     // struct node* second=(struct node*)malloc(sizeof(struct node));
//     // struct node* third=(struct node*)malloc(sizeof(struct node));
//     // head->data=2;
//     // head->next=first;
//     // first->data=7;
//     // first->next=second;
//     // second->data=4;
//     // second->next=third;
//     // third->data=9;
//     // third->next=NULL;
//     // displaylist(head);
//     // printf("Insertion of node in the beginning of linkedlist\n");
//     // struct node* new_node=(struct node*)malloc(sizeof(struct node));
//     // new_node->data=12;
//     // new_node->next=head;
//     // head=new_node;
//     // displaylist(head);
//     // printf("Insertion of node at the end of linkedlist\n");
//     // struct node* last_node=(struct node*)malloc(sizeof(struct node));
//     // third->next=last_node;
//     // last_node->data=5;
//     // last_node->next=NULL;
//     // displaylist(head);
//     // printf("Insertion of node between the linkedlist\n");
//     // struct node* middle_node=(struct node*)malloc(sizeof(struct node));
//     // middle_node->data=3;
//     // first->next=middle_node;
//     // middle_node->next=second;
//     // displaylist(head);