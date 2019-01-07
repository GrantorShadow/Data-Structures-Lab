/* a program to execute a insertion sort */

#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 5

void input(int []);
void insertion_sort(int []);
void display();

void main(){
	int i;
	int arr[MAX_SIZE];	
	input(arr);
	insertion_sort(arr);
	display(arr);
}

void input(int arr1[]){
	int i;
	printf("ENTER VALUES");
	for(i=0; i < MAX_SIZE; i++){
		scanf("%d",&arr1[i]);
	}
}

void insertion_sort(int arr1[]){
	int i,j,temp;
	for(i=1; i<MAX_SIZE; i++){
		temp=arr1[i];
		j=j-1;
		while(j>0 && temp < arr1[j]){
			arr1[j+1]=arr1[j];
			j=j-1;
		}
		arr1[j+1]=temp;
	}
}

void display(int arr){
	int i;
	for(i=0;i<MAX_SIZE;i++,arr++){
		printf("%d",arr);
	}
}
