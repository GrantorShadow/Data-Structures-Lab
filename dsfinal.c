#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <math.h>

#define MAX 100

#define maxx 10

struct node1{//node structure declared

	int data;

	struct node1 *next;	

}*t,*head;//node pointers declared

int front=0;

int rear=0;

int n;

void addq(char);

char delq();

struct soldier{

	char ch;

	int num;

}q[maxx];


typedef struct node {

	char data[15];

	struct node *left,*right;

	int ht;

} node;

node *insert(node *,char[]);

node *Delete(node *,char[]);

void preorder(node *);

void inorder(node *);

int height( node *);

node *rotateright(node *);

node *rotateleft(node *);

node *RR(node *);

node *LL(node *);

node *LR(node *);

node *RL(node *);

int BF(node *);

void tree_main();
 
char str[MAX], stack[MAX];

int top = -1;

void stack_main();

void sort_main();

void queue_main();

void linkedlist_main();

void graph_main();

int *insertion_Sort(int *);

void push(char );

char pop();

void postfix_to_infix(char []);

void append();// function to create and add data to linked list

void sort(struct node1 *);// selection sort

void display(struct node1 *);

void create_AM(int );

void dfs(int ,int ); 

void bfs(int );

int graph[15][15];

int visited1[15]={0};

int visited2[15]={0};

int size;

void main(){
	
	int choice;
	
	int exit;
	
	while(exit!=1){
	
	printf("---------------:Data Structures Lab Assignments Portal:---------------\n");
	
	printf("1.Sorting and Searching Algorithms\n");
	
	printf("2.Stack\n");
	
	printf("3.Queue\n");
	
	printf("4.Linked List\n");
	
	printf("5.Trees\n");
	
	printf("6.Graphs\n");
	
	printf("Please enter your choice\n");
	
	printf("9-EXIT\n");
	
	scanf("%d",&choice);
	
	switch(choice){
		
		case 1:
		
			sort_main();
			
			printf("\n");
		
			break;
		
		case 2:
		
			stack_main();
			
			printf("\n");
			
			break;
			
		case 3:
		
			queue_main();
			
			break;
			
		case 4:
		
			linkedlist_main();
			
			printf("\n");
			
			break;
			
		case 5:
		
			tree_main();
			
			printf("\n");
			
			break;
			
		case 6:
		
			graph_main();
			
			printf("\n");
			
			break;
			
		case 9:
		
			exit=1;
			
			break;
			
		default:
		
			printf("Invalid choice\n");
			
			break;
			
	}
			
  }

}

void sort_main(){//main


	int a[10],i,j,max,x,b[10][10],t=0,flag=0; //declaration of variables

	int *Result;

	printf("\n Enter array size \n");

	scanf("%d",&size);

	printf("\n Enter input array \n"); //array input

// Assuming that you are not accepting negative values lemme just initialize our buckets

	for(i = 0; i<10; i++){
		for(j = 0; j< 10; j++){
// I have initialized your buckets to -1 so that I know what's empty
			b[i][j] = -1;
		}
	}
// End of bucket initialization
	for(i=0;i<size;i++){
	
		scanf("%d",&a[i]);
	}

	max=a[0];
	
	for(i=1;i<size;i++){ //find max
	
		if(a[i]>max)
	
			max=a[i];
	
	}
	
	printf("\nMAX VALUE ENTERED=%d ",max);
	
	printf("\n \n");
	
	printf("Radix buckets \n");
	
	for(i=0;i<size;i++){
	
		t=0;
	
		x=a[i]%10;
	
		if(b[x][0]!=-1){
	
			while(b[x][t]!=-1){
	
				t++;
	
			}
	
		}
	
	b[x][t]=a[i];
	
	}



	int d;

	for(i=0;i<size;i++){

		t=0;

		x=a[i]%10;

		for(i = 0; i<10 ;i++){

			printf("bucket %d: ", i);

				for(j =0; j< 10; j++){

					if(b[i][j] == -1){

						printf("_ ");

					}

					else{

						printf("%d ", b[i][j]);

						d=b[i][j];

					}

				}

			printf("\n");

		}

	}

	int Arr[size], c=0;

	for(int x=0;x<10;x++)

		for(int y=0; y<10;y++)

			if(b[x][y]!=-1)

				Arr[c] = b[x][y];

	c++;

	Result = insertion_Sort(Arr);

	for(int i=0;i<size;i++){

		printf("SORTED ARRAY : %d ",*(Result));

	}

}			


int *insertion_Sort(int *arr){

	int sort,j;

	for (int i = 1; i < size; i++){

		sort = arr[i];

		j = i-1;

		while (j >= 0 && arr[j] > sort){

			arr[j+1] = arr[j];

			j = j-1;

		}

	arr[j+1] = sort;

	}

	return arr;

}			

 
char pop()

{

      return stack[top--];

}
 
void push(char ch)

{

      stack[++top] = ch;

}
 
void postfix_to_infix(char expression[]){// conversion of infix to postfix
      
      int count, length;
      
      char element, operator;
      
      length = strlen(expression);
      
      for(count = 0; count < MAX; count++)
      
      {
      
            stack[count] = 0;
      
      }
      
      printf("\nInfix Expression:\t");
      
      printf("%c", expression[0]);
      
      for(count = 1; count < length; count++)
      
      {
      
            if(expression[count] == '-' || expression[count] == '/' || expression[count] == '*'|| expression[count] == '+')
      
            {
      
                  element = pop();
      
                  operator = expression[count];
      
                  printf(" %c %c", operator, element);
      
            }
      
            else
      
            {
      
                  push(expression[count]);
      
            }
      
      }
      
      printf("%c", expression[top--]);
}


 

void stack_main()

{

      char postfix_expression[50];

      printf("\nEnter Postfix Expression:\t");

      scanf("%s", postfix_expression);

      postfix_to_infix(postfix_expression);

      printf("\n");

}

void addq(char p){

	rear++;

	if(rear==n+1)
 
	 rear=0;
 
		 if(rear==front){
 
 			printf("Queue overflow.\n");
 
 			 rear--;
 
 			 if(rear==-1)
 
 				 rear=n-1;
 
  		}
 
 	else
 
  	q[rear].num=p;
 
 }



char delq(){

	if(front==rear)

		printf("Queue underflow.\n");

	else{
	
		front++;

	if(front==n+1)

		front=0;

	return q[front].num;

	}

}


void queue_main(){

	int m,i,c,p,count,a,j;

	struct soldier s[maxx];

	printf("Enter number of soldiers: ");

	scanf("%d",&n);

	for(i=1;i<n+1;i++){

		s[i].ch='A'+i-1;

		s[i].num=1;

	}

	for(i=1;i<n+1;i++)

	addq(s[i].ch);

	printf("Enter the value of m: ");

	scanf("%d",&m);

	printf("Enter the starting point: ");

	scanf("%d",&p);

	front=p;

	front--;

	for(j=1;j<n;j++){

		count=m;

		while(count!=0){
	
			front++;

			if(front==n+1)
		
				front=0;
			
			if(s[front].num!=0)

				count--;	

		}

		front--;

		a=delq();

		s[front].num=0;

    printf("\nSoldier %c has to wait",a);

}

while(s[front].num==0){
	
	front++;
	
	if(front==n+1)
	
		front=0;
}

printf("\nSoldier %c will be escaped\n",q[front].num);

}

void linkedlist_main(){
	
	head=NULL;//header pointer;
	
	int n,i;
	
	printf("enter the total number of values to be sorted \n");
	
	scanf("%d",&n);
	
	printf("ENTER the data values\n");
	
	for(i=1;i<=n;i++){
	
		append();//creation of linked list
	
	}
	
	display(head);// display of entered data
	
	sort(head);// selection sort mechanism
	
	printf("\n\nSELECTION SORTED LINKED LIST ");
	
	display(head);//display of sorted data
}

void append(){// data entry & creation of linked list

	struct node1 *new_node;
	
	new_node=(struct node1*)malloc(sizeof(struct node1));// typecasting and declaring node
	
	scanf("%d",&new_node->data);
	
	new_node->next=NULL;
		
	if(head==NULL){//head is NULL	
	
		head=new_node;
	
		t=head;
	
	}
	
	else{// head is not NULL
	
		t->next=new_node;
	
		new_node->next=NULL;
	
		t=new_node;
	
	}			
}

void display(struct node1 *head){

	printf("\nNODE DISPLAY \n");

		while(head != NULL){// if head is not NULL i.e DATA is present

			printf("%d ",head->data);

			head=head->next;

		}

}

void sort(struct node1 *list){

     struct node1 *temp1, *temp2; int i,j,temp3;

     temp1=list;

     temp2=list->next;

     for(i=0;i<6;i++){//outer loop to run the sort

         if(temp1==NULL || temp2==NULL)//if both pointer are in the adjacent nodes

         	continue;

         for(j=0;j<6-i;j++){// sort loop

              if(temp2 == NULL)// if only the pointer is present on the node to be checked

                  continue;

              if(temp1->data > temp2->data){//finding the smaller element

            temp3=temp1->data;// swapping the larger element

            temp1->data=temp2->data;//swapping the smaller elemnt

            temp2->data=temp3;//finishing the swap

        }

        temp2=temp2->next;
        
    }

    temp1=temp1->next;// moving the pointer ahead

    temp2=temp1->next;// moving the pointer ahead

 }

}

void graph_main(){
    
    int i,j,n,*visited;
    
    printf("\nEnter the number of nodes\t\t");
    
    scanf("%d",&n);
    
    create_AM(n);
    
    printf("\n\nBFS Display\nEnter the starting vertex\t");
    
    scanf("%d",&i);
    
    for(j=0;j<n;j++)
    
    {
    
        if (!visited2[i])
    
        {
    
            dfs(i,n);
    
        }
    
    }
    
    printf("\n");
    
    bfs(n);
    
    printf("\n");

}

void create_AM(int n)

{

    int i,j;

    char *row;

    row=(char*)malloc(n*sizeof(char));

    printf("\n");

    for (i=0;i<n;i++)

    {

        printf("For row %d enter AM column values\t",i);

        scanf("%s",row);

        for(j=0;j<n;j++)

        {

            graph[i][j]=row[j]-48;

        }

    }

}

void dfs(int v,int n){
    
    int j;
    
    printf("DFS display %d\t",v);
    
    visited2[v]=1;
    
    for(j=0;j<n;j++)
    
    {
    
        if (graph[v][j]==1)
    
        {
    
            if(!visited2[j])
    
            {
    
                dfs(j,n);
    
            }
    
        }
    
    }
}


void bfs(int n)

{

    int v,j,r=0,f=0,Q[50];

    printf("\n\nBFS Display\nEnter the starting vertex\t");

    scanf("%d",&v);

    printf("\n");

    visited1[v]=1;

    Q[r++]=v;

    while(f<r)

    {

        v=Q[f++];

        visited1[v]=1;

        printf("%d\t",v);

        for(j=0;j<n;j++)

        {

            if(graph[v][j]==1 && !visited1[j])

            {
             
                visited1[j]=1;

                Q[r++]=j;

            }

        }

    }

}


void tree_main() {
	
	node *root=NULL;
	
	int size,i;
	
	char str[15];

	printf("\nEnter no. of elements : ");

	fflush(stdout);

	scanf("%d",&size);

	root=NULL;

	for(i=1; i<=size; i++) {

		printf("\n Enter element %d = ",i);

		fflush(stdin);

		fflush(stdout);

		scanf("%s",str);

		root=insert(root,str);

		printf("\n After insertion of %d element : \n ",i);

		printf("\nPreorder sequence : ");

		preorder(root);

		printf("\n\nInorder sequence : ");

		inorder(root);

		printf("\n");

	}

	printf("\n Enter element to delete = ");

	fflush(stdin);

	fflush(stdout);

	scanf("%s",str);

	root=Delete(root,str);

	printf("\n After deletion of element : \n ");

	printf("\nPreorder sequence : ");

	preorder(root);

	printf("\n\nInorder sequence : ");

	inorder(root);

	printf("\n");



}



node * insert(node *T, char str[]) {

	if(T==NULL) {

		T=(node*)malloc(sizeof(node));

		strcpy(T->data,str);

		T->left=NULL;

		T->right=NULL;

	} else if(strcmp(str,T->data)>0) {   // insert in right subtree

		T->right=insert(T->right,str);

		if(BF(T)==-2) {// as balance factor can only be -1 or less

			if(strcmp(str,T->data)>0){

				printf("\n RR Rotation is Performed. ");

				T=RR(T);

			}

			else{

				printf("\n RL Rotation is Performed. ");

				T=RL(T);

			}

		}

	} else if(strcmp(str,T->data)<0) {

		T->left=insert(T->left,str);

		if(BF(T)==2)

		{

			if(strcmp(str,T->data)<0)

			{

				printf("\n LL Rotation is Performed. ");

				T=LL(T);

			}

			else

			{

				printf("\n LR Rotation is Performed. ");

				T=LR(T);

			}

		}



	}


	T->ht=height(T);

	return(T);

}



int height(node *T) {

	int lh,rh;

	if(T==NULL)

		return(0);

	if(T->left==NULL)

		lh=0;

	else

		lh=1+T->left->ht;

	if(T->right==NULL)

		rh=0;

	else

		rh=1+T->right->ht;


	if(lh>rh)

		return(lh);

	return(rh);

}


node * rotateright(node *x) {

	node *y;

	y=x->left;

	x->left=y->right;

	y->right=x;

	x->ht=height(x);

	y->ht=height(y);

	return(y);
	
}

node * rotateleft(node *x) {

	node *y;

	y=x->right;

	x->right=y->left;

	y->left=x;

	x->ht=height(x);

	y->ht=height(y);

	return(y);
}

node * RR(node *T) {

	T=rotateleft(T);

	return(T);

}

node * LL(node *T) {

	T=rotateright(T);

	return(T);

}

node * LR(node *T) {

	T->left=rotateleft(T->left);

	T=rotateright(T);



	return(T);

}

node * RL(node *T) {

	T->right=rotateright(T->right);

	T=rotateleft(T);

	return(T);

}

int BF(node *T) {

	int lh,rh;

	if(T==NULL)

		return(0);

	if(T->left==NULL)

		lh=0;

	else

		lh=1+T->left->ht;

	if(T->right==NULL)

		rh=0;

	else

		rh=1+T->right->ht;

	return(lh-rh);

}

void preorder(node *T) {

	if(T!=NULL) {

		printf("%s  ",T->data);

		preorder(T->left);

		preorder(T->right);

	}

}

void inorder(node *T) {

	if(T!=NULL) {

		inorder(T->left);

		printf("%s  ",T->data);

		inorder(T->right);

	}

}

node * Delete(node *T,char str[]) {

	node *p;

	if(T==NULL) {

		return NULL;

	}
	
	 else if(strcmp(str,T->data)>0) {   // insert in right subtree

		T->right=Delete(T->right,str);

		if(BF(T)==2)
		{

			if(BF(T->left)>=0)

				T=LL(T);

			else

				T=LR(T);

		}

	} 
	
	else if(strcmp(str,T->data)<0)
	
	{

		T->left=Delete(T->left,str);

		if(BF(T)==-2)    //Rebalance during windup

		{

			if(BF(T->right)<=0)

				T=RR(T);

			else

				T=RL(T);

		}

	}

	else
	{

		//data to be deleted is found

		if(T->right!=NULL) {

			//delete its inorder succesor

			p=T->right;

			while(p->left!= NULL)

				p=p->left;

			//strcmp(T->data,p->data);

			T->right=Delete(T->right,p->data);

			if(BF(T)==2)//Rebalance during windup

			{

				if(BF(T->left)>=0)

					T=LL(T);

				else

					T=LR(T);
			}

		} else

			return(T->left);

	}

	T->ht=height(T);

	return(T);

}

