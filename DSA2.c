/* DS ASSINGMENT */
/* a program to convert prefix to infix */

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define MAX 10

struct stack_element{
	int arr[MAX];
	int top;
	struct stack_element *ptr;
};//*ptr;

//int stackEMPTY(struct stack_element *);
//int stackFULL(struct stack_element *);
//void PREFIXtoPOSTFIX();
void push(struct stack_element *, int);
void pop(struct stack_element *);
//void display(&ptr);

void main(){
	//struct stack_element obj;
	char postfix[10];// array to store the basic value
	for(int i=0;i<10;i++){
		printf("\nENTER THE POSTFIX\n");
		scanf("%s",postfix);
	}
	printf("\nPOSTFIX TO INFIX CONVERSION\n");
	//PREFIXtoPOSTFIX();	 
	
	push(struct stack_element *,int);
	pop(struct stack_element *,);
}

//void PREFIXtoPOSTIX(){
	//}

/*int stackEMPTY(){
	if(ptr->top=-1){
		printf("STACK UNDERFLOW");
		return (-1);
	}
}

int stackFULL(struct stack *ptr){
	if(ptr->top==MAX-1)
	{
		printf("STACK OVERFLOW");
		return (-1);
	}
}

*/ 

void push(struct stack *ptr,int x,)
{
	if(ptr->top==MAX-1)
	{
		printf("STACK OVERFLOW");
	}
	else 
	//if(stackFULL(struct stack *ptr)!=-1){
		ptr->top++;
		ptr->arr[ptr-top]=x;
	}
}

int pop(struct stack *ptr){
	int x;
	if(ptr->top=-1){
		printf("STACK UNDERFLOW");
		return (-1);
	}// check stack empty function
	else{
//	if(stackEMPTY(struct stack *ptr)!=-1){
		x=ptr->arr[ptr->top];
		ptr->top--;
	}
	return(x);
}

	
//void display(struct stack_element *ptr){
	//int i;
	//if(i.ptr 
