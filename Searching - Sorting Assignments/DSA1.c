#include<stdio.h>

void main()//main
{
    int a[10],i,j,size,max,x,b[10][10],t=0,flag=0;         //declaration of variables
    //int f[10];
    printf("\n Enter array size \n");
    scanf("%d",&size);
    printf("\n Enter input array \n");        //array input
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
   
    max=a[0];
    for(i=1;i<size;i++)                 //find max
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("\nMAX VALUE ENTERED=%d ",max);
    printf("\n \n");
    printf("Radix buckets \n");
   
   
    while(max>0)
    {
        max=max/10;
        flag++;
    }
    for(i=0;i<size;i++)
    {
        t=0;
        x=a[i]%10;
        printf("%d\n",x);//RADIX
        // printf("\n \n");
       
      
       
        if(b[x][0]!='\0')
        {
            while(b[x][t]!='\0')
            {
                t++;
            }
        }
        b[x][t]=a[i];
        printf("%d\n",a[i]);
      
    }
    for(i=0;i<size;i++)
    {
 	     j=0;
        t=0;
        if(b[i][t]!='\0')
    	  {
				printf("GARBAGE");
     		   printf("%d\n",b[i][t]);
      	   t++;
    	  }
    } 
}
