/* a program to create a queue */
#include<stdio.h>
#include<stdlib.h>
#define MAX 10 

struct queue{
	int data[MAX];
	int front,rear;
};

void enqueue(struct queue *);
void dequeue(struct queue *);
void display(struct queue);

void main(){
	struct queue q;
	q.front=-1;
	q.rear=-1;
	enqueue(&q);
	enqueue(&q);
	enqueue(&q);
	dequeue(&q);
	dequeue(&q);
	display(q);
}

void enqueue(struct queue *q){
	int x;
	printf(" \n Enter the data ::");
	scanf("%d",&x);
	
	if(q->front==-1){
		q->front=0;
	}
	q->data[++q->rear]=x;
	
}

void dequeue(struct queue *q){
	printf("\n FRONT VALUE (DELETED): %d \n",q->data[q->front]);	
	q->front++;	
}

void display(struct queue q){
	int i,flag=0;
	for(i=q.front;i<= q.rear;i++){
		printf("\n VALUES PRESENT IN QUEUE: %d",q.data[i]);
		printf("\n \n");
		flag++;
		}
	printf(" TOTAL ELEMENTS IN THE QUEUE : %d",flag);	
	printf("\n \n");
}
 	
