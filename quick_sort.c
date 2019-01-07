/* a program to implement quick sort */

#include<stdio.h>
#include<stdlib.h>
#define MAX 5

void input(int []);
void quick_sort(int []);
//void swap();
//void display();

void main(){
	int arr[MAX];
	input(arr);
	quick_sort(arr);
	//display(arr);
}

void input(int arr[MAX]){
	int i;
	printf("\nENTER VALUES\n");
	for(i=0; i < MAX; i++){
		scanf("%d",&arr[i]);
	}
}

void quick_sort(int arr[MAX]){
	int pivot, mid, i, temp1, temp2,temp;
	mid=MAX/2;
	pivot=arr[(0+MAX-1+mid)/2];
	//printf("\nPIVOT= %d",pivot);
	for(i=0; i<MAX; i++){
			
			if(arr[i]<pivot){// first half of the array
			printf("%d",temp1);
			continue;//loop continues
			}
			else if(arr[i]>pivot){
				temp1=arr[i];
				break;
			}
		}
	
		
	for(i=MAX-1; i>0; i--){
		if(arr[i]<pivot){
			temp2=arr[i];
			break;
		}
		else if(arr[i]>pivot){// second half of the array
		temp1=arr[i];
		}
	}	
	// swapping begins
	
	temp=temp1;
	temp1=temp2;
	temp2=temp;
	
	printf("\ntemp1= %d",temp1);
	printf("\ntemp2= %d\n",temp2);


}

		
	
	
		
			
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		



	
