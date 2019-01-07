/* a program to use merge sort */

#include<stdio.h>
#include<stdlib.h>
#define MAX 10

void input(int *);
int merge_sort(int [], int);
void display(int);

void main(){
	int arr[MAX];
	input(arr);
	merge_sort(arr);
	display(arr);		
}

void input(int *arr){
  printf("\nENTER INPUT VALUES\n");
	int i;
	for(i=0;i<MAX_SIZE;i++, arr++){
		scanf("%d",arr);
	}
}

void merge_sort(int arr[MAX]){
	int mid=MAX/2;
	//int front,rear;
	//front=arr[0];
	int size;
	
	int a[mid];
	
