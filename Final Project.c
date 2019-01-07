/* a program to record history */

#include<stdio.h>

#include<string.h>

#include<stdlib.h>

#include<time.h>

#define max 5

struct stack{

	int GR[max];

	char name[max];

	int flag[max];

	int top;

};

void push(struct stack *,int ,int );

void pop(struct stack *);

void display(struct stack *);

void push(struct stack *s,int no, int flag){

		s->top++;

		s->GR[s->top] = no;

		s->flag[s->top] = flag;	

}

void pop(struct stack *s){

	if(s->top >=0){
	
		printf("%d\t\t\t",s->GR[s->top]);

		printf("%d",s->flag[s->top]);
		
		printf("\n");
	
		s->top--;
	
	}
	else{
	
		printf("no history to show");
	
	}
	
}
	

void main(){

	time_t rawtime;

	struct tm * timeinfo;

  	time ( &rawtime );

  	timeinfo = localtime ( &rawtime );

  	printf ( "%s", asctime (timeinfo) );
  	
	struct stack s;

	s.top=0;

	int GR,op,choice,flag,count,i;
	
	count=0;

	printf("------------------VIT PUNE ERP SYSTEM------------------");

	while(op!=4){

	printf("\n 1. Show ERP data available \n 2. View Details. \n 3. View history \n 4. Exit.\n");

	scanf("%d",&choice);
	
	printf("\n\n");

	switch(choice){

		case 1:

			printf("Showing data available\n");

			printf("1. HOD\n");

			printf("2. Prof\n");

			printf("3. Asst. Prof\n");

			printf("4. Asst. Prof\n");

			printf("5. Asst. Prof\n");

			op=0;

			break;

		case 2:

			printf("Additional details requested...\n");

			printf("Verfication Process \n please enter your GR number to proceed\n");

			scanf("%d",&GR);
			
			count++;

			printf("which data do you want to see\n");

			scanf("%d",&flag);

			push(&s,GR,flag);

				if(flag==1){

					printf("name = Dr Ram\n");

        			printf("age = 50\n");

        			printf("bonus = 12800\n");

      			  	printf("experience = 13\n");

      			  	printf("salary = 60000\n");

				}

				if(flag==2){

					printf("name = Mr Kramade\n");

		        	printf("age = 48\n");

		        	printf("bonus = 14000\n");

		        	printf("experience = 16\n");

		        	printf("salary = 45500\n");

		        }

		        if(flag==3){

		        	printf("name = Mr Relekar \n");

		        	printf("age = 48\n");

		        	printf("bonus = 14000\n");
			
		        	printf("experience = 8\n");
		
		        	printf("salary = 70000\n");

		        }

		        if(flag==4){

		        	printf("name = Mr Singh\n");

		        	printf("age = 43\n");

		        	printf("bonus = 11000\n");

		        	printf("experience = 11\n");

		        	printf("salary = 45000\n");

		        }

		        if(flag==5){

		        	printf("name = Mr Charan\n");
	
		        	printf("age = 43\n");
		
        			printf("bonus = 13000\n");

        			printf("experience = 13\n");

        			printf("salary = 55500\n");

       			 }			

        	op=0;

        	break;

		case 3:

			printf("Viewing History\n");

			printf("GR\t\toption selected:\n");
			
			for(i=0;i<count;i++){

				pop(&s);
				
			}	
					
			op=0;

			break;

		case 4:

			op=4;
			
			printf("exiting..\n");
			
			printf ( "%s", asctime (timeinfo) );

			break;

		default:

			printf("please enter your choice again");

			break;

	}	

  }

}

		

			

			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
		
		
	
