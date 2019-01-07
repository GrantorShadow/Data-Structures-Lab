/* a program to push and pop */

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct stack_element{
	int a;
	struct stack_element *next;
};

void push(struct stack_element **);
void pop(struct stack_element **);
void display(struct stack_element *);

void main(){
	struct stack_element *head=NULL;// declaring head pointer as NULL
	int choice;// variable to input and store choice
	printf("Do you want to push (press 1) or pop (press 2) ?");
	scanf("%d",&choice);// inputting choice
	if(choice==1){
		push(&head);// storing choice
	}
	if(choice==2){
		pop(&head);// storing choice
	}
}

void push(struct stack_element **list){// push function
	struct stack_element *temp;// creating a new node for stack
	temp=(struct stack_element*)malloc(sizeof(struct stack_element));
	temp->a=10;// storing 
	temp->next=*list;
	*list = temp;
}

void pop(struct stack_element **list){
	struct stack_element *temp;
	temp=(struct stack_element*)malloc(sizeof(struct stack_element));
	int temp_data;
	temp=*list;
	temp_data=temp->a;
	printf("%d",temp_data);
	free(temp);
}























