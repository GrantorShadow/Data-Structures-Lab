/* a program to convert infix to prefix or postfix */
/* DS Assingment 2 */

#include<stdio.h>//including libraries
#include<stdlib.h>
#include<malloc.h>
#include<string.h>
#define INPUT_ARRAY_SIZE 10 // defining array size as 10

struct stack_element{ //Stack node of one element is created
	char token;
	int top;
	struct stack_element *next;
};


void convert(char []); //global variables are declared
void push(struct stack_element **,char [],int);// check for correct prototype
void pop(struct stack_element **,char [],int);// check for 
void check_precedence(struct stack_element **,char []);


void main(){ //  main function declared
	struct stack_element *head=NULL; // declaring head pointer as NULL
	int postfix[100],prefix[100];
	char input[INPUT_ARRAY_SIZE];
	scanf("%s", input);
	printf("\n                   INFIX TO PREFIX/POSTFIX CONVERTOR                   \n");
	convert(input); // calling function to convert infix or postfix
}

void push(struct stack_element **list,char input[],int n){ //PUSH FUNCTION DECLARED
	struct stack_element *temp;
	temp=(struct stack_element*)malloc(sizeof(struct stack_element));//allocating memory for stack   		element
	temp->ch=input[n];
	temp->next=*list;
	*list = temp;
}

void pop(struct stack_element **list,char input[],int j){//POP FUNCTION DECLARED
	struct stack_element *temp;
	temp=(struct stack_element*)malloc(sizeof(struct stack_element));
	char temp_data;
	temp=*list;
	temp_data=temp->ch;//extraction of data from pop function
	printf("%d",temp_data);
	free(temp);
}


void convert(char input[]){//CONVERT FUNCTION 
	int choice;
	printf("\nPLEASE SELECT PREFFERED O/P FORMAT \n PREFIX ~ Press 1  \n POST FIX ~ Press 2 \n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
		printf("\n INFIX TO PREFIX SELECTED \n");
		//call function prototype here		
		break;
		
		case 2:
		printf("\n INFIX TO POSTFIX SELECTED \n");
		//call function prototype here
		break;
	}
}


int check_precedence(char input[]){
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

		
void infix_postfix()
{
	struct stack_element* new_stack = (struct stack_element*) malloc(sizeof(struct stack_element));
	int postfix[];
	new_stack->top=-1;
	new_stack->next=NULL;
	int i,j=0;
	k=-1
	
	for(i=0;i<size;i++)// size of string
	{
		if(input[i]>='a'&&input[i]<='z')
		{
			pop(input[i]);
			printf("%s",input[i]);
			postfix[++k]=input[i];
		}
		if(input[i]=='(')
		{
			push(head,exp[i]);
		}
		else if(input[i]==')')
		{
			while(top!=-1 && stack_element->next[stack_element->top]=='(');
			{
				postfix[++k]=pop(new_stack);
			}
		}
		else if
		{
			while(Prec(exp[i]) <= Prec(new_stack->next[new_stack->top](new_stack)))
			{
				postfix[++k]=pop(new_stack);
			}
			push(new_stack,input[i]);
		}
		
		while (!isEmpty(stack))
        exp[++k] = pop(stack );
 
    exp[++k] = '\0';
    printf( "\n %s", postfix[] );
}			
		
	}
		
		
		
		
		
		
		
		
		
		













