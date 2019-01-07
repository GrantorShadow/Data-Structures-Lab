<#include<stdio.h>
#define MAX 10

struct q_node{
	int data[10];
	int front,rear;
}

void add(struct q_node *);
void delete(struct q_node *);
void display(struct q_node *);

void main(){
	struct q_node obj;
	obj.front=-1;
	onj.rear=-1;
	printf("do you want to enter new data ?");
	if(obj.front==obj.rear)
	printf("queue is empty :: adding new data");
	add(&q_node);
	delete(&q_node);
	display(&q_node);
}

void add(struct q_node *obj){
	int x;
	printf(" \n Enter the data :: ");
	scanf("%d",&x);
	printf("\n You want to insert in the front or in the end ?");
	
	if(q_node->front==-1){
		q->front=q->rear=0;
		q->data[q->front]=x;
	}
	else
	q->data[++q->front]=x;
	
}






	
