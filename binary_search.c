/* a program to execute binary search */
/* please input sorted array */

#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 5

void input(int *);
int binary_search(int [], int);
void display(int);

void main(){
	int arr[MAX_SIZE], i, n, result;
	input(arr);
	printf("\nENTER VALUE TO BE SEARCHED\n");
	scanf("%d",&n);
	result=binary_search(arr, n);
	display(result);
}

void input(int *arr){
  printf("\nENTER INPUT VALUES\n");
	int i;
	for(i=0;i<MAX_SIZE;i++, arr++){
		scanf("%d",arr);
	}
}

int binary_search(int arr[MAX_SIZE], int n){
	int i,mid,j;
	int front,rear;
	int ele_found = 0;
	front=arr[0];
	rear=arr[MAX_SIZE-1];

	for(i=0;i<MAX_SIZE;i++){
		mid=(front+rear)/2;
		if(n==mid){

			ele_found = 1;
		}
		else if(n<mid){
			front=arr[0];
			rear=mid-1;

		}
		else if(n>mid){
			front=mid+1;
			rear=arr[MAX_SIZE-1];
		}
	}
	if(ele_found)		
	return 1;
}			
			
void display(int result){
	if(result){
		printf("\nELEMENT FOUND\n");
	}
	else{
		printf("\nELEMENT NOT FOUND\n");
	}		
}

