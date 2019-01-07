/* a program to implement basics of stack using arrays */

#include<stdio.h>
#include<stdlib.h>
#define MAX 5

struct stack{
	int data[MAX];
	int top;
};

void push(struct stack *);
int pop(struct stack *);
//void display(struct stack element);
int IsFULL(struct stack *);
int IsEMPTY(struct stack *);

void main(){
	int i,ch;
	struct stack element;
	element.top=-1;
	push(&element);
	pop(&element);
	//display(element);
}

int IsFULL(struct stack *element){
	if(element->top+1>10){
		printf("\nSTACK OVERFLOW\n");
		return 0;	
	}
}
	
int IsEMPTY(struct stack *element){
	if(element->top != -1){
		printf("STACK UNDERFLOW");
		return 0;
	}		
}


void push(struct stack *element){
	if(IsEMPTY!=0){
		element->top++;
		printf("\nENTER DATA\n");
		element->top++;
		scanf("%d",&element->data[element->top]);
	}
}

int pop(struct stack *element){
	if(IsFULL!=0){
		return element->data[element->top--];
	}
}

//void display(struct element){
	
	
	
	
	
		
