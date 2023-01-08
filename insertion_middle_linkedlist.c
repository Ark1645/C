#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;                    //Data of the node
    struct node *nextptr;       //Address of the node
}*stnode;     				
void createNodeList(int n) //function to create the list
{
    struct node *fnNode, *tmp;
    int num, i;
    stnode = (struct node *)malloc(sizeof(struct node));
    if(stnode == NULL) //check whether the stnode is NULL and if so no memory allocation
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
// reads data for the node through keyboard
        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        stnode-> data = num;      
        stnode-> nextptr = NULL; //Links the address field to NULL
        tmp = stnode;
//Creates n nodes and adds to linked list
        for(i=2; i<=n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if(fnNode == NULL) //check whether the fnnode is NULL and if so no memory allocation
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);
 
                fnNode->data = num;      // links the num field of fnNode with num
                fnNode->nextptr = NULL; // links the address field of fnNode with NULL
 
                tmp->nextptr = fnNode; // links previous node i.e. tmp to the fnNode
                tmp = fnNode;
            }
        }
    }
} 

void insertNodeAtMiddle(int num, int pos) //function to insert node at the middle
{
    int i;
    struct node *fnNode, *tmp;
    fnNode = (struct node*)malloc(sizeof(struct node));
    if(fnNode == NULL)
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
        fnNode->data = num; //Links the data part
        fnNode->nextptr = NULL;
        tmp = stnode;
        for(i=2; i<=pos-1; i++)
        {
            tmp = tmp->nextptr;
 
            if(tmp == NULL)
                break;
        }
        if(tmp != NULL)
        {
            fnNode->nextptr = tmp->nextptr;  //Links the address part of new node
            tmp->nextptr = fnNode;   
        }
        else
        {
            printf(" Insert is not possible to the given position.\n");
        }
    }
}

void displayList() //function to display the list
{
    struct node *tmp;
    if(stnode == NULL)
    {
        printf(" No data found in the empty list.");
    }
    else
    {
        tmp = stnode;
        while(tmp != NULL)
        {
            printf(" Data = %d\n", tmp->data);   // prints the data of current node
            tmp = tmp->nextptr;                 // advances the position of current node
        }
    }
} 
int main()
{
    int n,num,pos;
		printf("\n\n Linked List : Insert a new node at the middle of the Linked List :\n");
		printf("-----------------------------------------------------------------------\n");
	
    printf(" Input the number of nodes (3 or more) : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Data entered in the list are : \n");		
    displayList();
    printf("\n Input data to insert in the middle of the list : ");
    scanf("%d", &num);
    printf(" Input the position to insert new node : " );
    scanf("%d", &pos);
        if(pos<=1 || pos>=n)
    {
     printf("\n Insertion can not be possible in that position.\n ");
    }
        if(pos>1 && pos<n)      
      {
              insertNodeAtMiddle(num, pos);
       printf("\n Insertion completed successfully.\n ");
      }
    printf("\n The new list are : \n");		
    displayList();
    return 0;
}
