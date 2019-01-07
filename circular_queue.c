/* a program to create a circular queue */
#include<stdio.h>
#include<stdlib.h>
#define MAX 10

struct queue{
	int data[MAX];
	int front,rear;
};

void enqueue(struct queue *);
void isqueuefull(struct queue *);
void dequeue(struct q_node *);
void display(struct q_node *);
void isqueueEMPTY(struct q_node *);
void isqueueFULL(struct q_node *);

void main(){
	struct q_node obj;
	obj.front=-1;
	obj.rear=-1;
	enqueue(&q_node);
	dequeue(&q_node);
}

int isqueueEMPTY(struct q_node *q){
	if(q->front==-1||q->front==q->rear){
		printf("\n QUEUE IS EMPTY \n");
		q->front=0;
		return 1;
	}
	else{
		return 0;
	}
}	

int isqueueFULL(struct q_node *q){
	if(rear==MAX&&front==0){
		printf("\n QUEUE IS FULL \n");
		return 1;
	}
	if(rear==front){
		printf("\n QUEUE IS FULL AS REAR AND FRONT ARE AT SAME & \n");
		return 1;
	}
	else{
		return 0;//change to 0
	}
}

void enqueue(struct q_node *q){
	int x,check1,check2;
	printf(" \n Enter the data \n");
	scanf("%d",&x);
	check1=isqueueEMPTY(struct q_node *q);
	check2=isqueueFULL(struct q_node *q);
	if(check1==1&&check2==0){
		printf("\n sufficient space available for data entry \n");
		q->data[++q->rear]=x;
   }
	if(q->rear > 10){
		printf("\n CIRCULAR QUEUE INITIATED \n");
		check3=isqueueFULL(struct q_node *q);
		if(check3==0){
			printf("\n Sufficient space available for data entry \n");
			if(q->front>0){
				q->rear=0;
			}
		}
	}
	else{
		printf("\n NOT ENOUGH MEMORY AVAILABLE \n");		
	}
}	



void dequeue(struct q_node *q){
	int check1;
	check1=isqueueEMPTY(struct q_node *q);
	if(check1==1){
		printf("INVALID SELECTION");
	}
	else{
		q->front++;
	}
	if(front==MAX&&rear>0&&rear!=front){
		printf("CIRCULAR QUEUE INITIATED");
		front=0;
	}
}
	
		
	
   
   

		
		
		
		
		
		
		
		
		
		
		
		
		
