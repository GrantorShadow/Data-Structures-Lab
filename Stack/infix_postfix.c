#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10

struct stack{
	int data[MAX_SIZE];
	int top;
}


void input(char *);
void push();
void pop();
int precedence();
char convert(char []);
void display();

void main(){
	char arr[MAX_SIZE];
	char postfix[MAX_SIZE];
	struct stack s;
	s.top=-1;
	
	input(arr);// shouldnt input be saved in a string ??
	convert(arr);
	display(arr);
}

void input(struct stack *s){
	printf("\nPlease enter an INFIX string\n");//entry of string
	scanf("%s",arr);
	//return arr;
}

void push(struct stack *s,char exp){
	//if(IsFULL){
//	}
	s->top++;
	s->data[s->top];
}

void pop(struct stack *s){
	//if(IsEMPTY){
	//}
	returns->data[s->top--];
}

int precedence(char exp){
    switch (ch)
    {
    case '+':
    case '-':
        return 1;
 
    case '*':
    case '/':
        return 2;
 
    case '^':
        return 3;
    }
    return -1;
}

void convert(struct stack *s,char arr[]){
	int i,j,x;
	j=0;
	for(i=0;i<MAX_SIZE;i++){
		if(arr[i]== ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'){
			postfix[j]=pop(arr[i]);
			j++;
		}
		else if(arr[i]=='('){
			push(struct stack *s,arr[i]);
		}
		else if(arr[i]==')'){
			for(int x=s->top;x<i;x--){
				postfix[j]=pop(arr[i]);
				j++;
			}
		}
		else{
			while (isEmpty(struct stack *s)!=-1 && precedence(arr[i]) <= precendence(s->data[s->top])){
				postfix[j]=pop(s->data[s->top]);
				j++;
				push(struct stack *s,arr[i]);
			}
		}
	}
}

void display(){
		













		
		
		
		
		
		
		
		
		
		
		
		
		
		
								

	
	
