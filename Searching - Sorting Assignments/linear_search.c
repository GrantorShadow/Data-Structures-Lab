/* a program to execute a linear/sequential sort */

#include<stdio.h>
#include<stdlib.h>//adding standard libraries 
#define MAX_SIZE 10

void input(int *);//input function to recieve data
int linear_search(int []);//
void display(int);

void main(){
	int arr[MAX_SIZE],i,result;
	input(arr);
	result=linear_search(arr);
	display(result);
}

void input(int *arr){
  printf("\nENTER INPUT VALUES\n");
	int i;
	for(i=0;i<MAX_SIZE;i++){
		scanf("%d",arr);
		arr++;
	}
}

int linear_search(int arr[MAX_SIZE]){
	int i=0,n;
	printf("\nENTER VALUE TO BE SEARCHED\n");
	scanf("%d",&n);
	for(i=0;i<10;i++){
		if(arr[i]==n)
			ele_found = 1;
	}
	if(ele_found==1)
	return 1;
}

void display(int result){
	if(result==1){
		printf("\nELEMENT FOUND\n");
	}
	else{
		printf("\nELEMENT NOT FOUND\n");
	}		
}

