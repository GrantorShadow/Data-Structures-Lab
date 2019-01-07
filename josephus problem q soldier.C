/*

problem statement:implement josephus problem
*/
#include<stdio.h>
#include<conio.h>
#define max 10


int front=0;
int rear=0;
int n;

void addq(char);
char delq();
struct soldier
{
char ch;
int num;
}q[max];

void main()
{
int m,i,c,p,count,a,j;
struct soldier s[max];
clrscr();
printf("Enter number of soldiers: ");
scanf("%d",&n);



for(i=1;i<n+1;i++)
{
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
for(j=1;j<n;j++)
{
count=m;
while(count!=0)
{
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

while(s[front].num==0)
{
front++;
if(front==n+1)
front=0;
}


printf("\nSoldier %c will be escaped\n",q[front].num);
getch();
}

void addq(char p)
 {
 rear++;
 if(rear==n+1)
 rear=0;
 if(rear==front)
  {
  printf("Queue overflow.\n");
  rear--;
  if(rear==-1)
  rear=n-1;
  }
 else
  q[rear].num=p;
 }

char delq()
{
if(front==rear)
printf("Queue underflow.\n");
else
{
front++;

if(front==n+1)
front=0;
return q[front].num;
}
}
/*output:
Enter number of soldiers: 7
Enter the value of m: 3
Enter the starting point: 1

Soldier C has to wait
Soldier F has to wait
Soldier B has to wait
Soldier G has to wait
Soldier E has to wait
Soldier A has to wait
Soldier D will be escaped
*/
