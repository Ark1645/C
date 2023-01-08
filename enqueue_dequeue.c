//Queue Data Structure performs FIFO(First In First Out) operation.
#include<stdio.h>
#include<stdlib.h>
#define size 7
int queue[size];
int front=-1,rear=-1;
void enqueue(){
    int item;
    if(front==-1){
        front=0;
        rear=0;
    }
    if((front==0 && rear==size-1)||(front==rear+1)){
        printf("Queue Overflow\n");
        return;
    }
    if(front==-1){
        front=0;
        rear=0;
    }
    else{
        printf("Enter the element: ");
        scanf("%d",&item);
        if(rear==size-1){
            rear=0;
        }
        else{
            rear=rear+1;
        }
    }
    queue[rear]=item;
}
void Dequeue(){
    if(front==-1){
        printf("Queue Underflow\n");
        return;
    }
    printf("Element deleted from the queue is %d\n",queue[front]);
    if(front==rear){
        front=-1;
        rear=-1;
    }
    else{
        if(front==size-1){
            front=0;
        }
        else{
            front=front+1;
        }
    }
}
void display(){
    int fpos=front,rpos=rear;
    if(front==-1){
        printf("Queue is Empty\n");
        return;
    }
    printf("Queue elements are: ");
    if(fpos<=rpos){
        while(fpos<=rpos){
            printf("%d ",queue[fpos]);
            fpos++;
        }
    }
    else{
        while(fpos<=size-1){
            printf("%d ",queue[fpos]);
            fpos++;
        }
        fpos=0;
        while(fpos<=rpos){
            printf("%d ",queue[fpos]);
            fpos++;
        }
    }
    printf("\n");
}
int main()
{
	int choice;
	while(1)
	{
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Display\n");
		printf("4.Quit\n");

		printf("Enter your choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1 :
				enqueue();
				break;
			case 2 :
				Dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
                exit(0);
				break;
			default:
				printf("Wrong choice\n");
		}
	}
	
	return 0;
}