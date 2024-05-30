#include<stdio.h>
int q[5],front=-1,rear=-1;
void enq(int data)
{
if(rear==4)
printf("queue full\n");
else
{
front=0;
rear++;
q[rear]=data;
}
}
void deq()
{
if(front>rear || rear==-1)
printf("queue empty\n");
else
{
printf("dequeing %d\n",q[front]);
front++;
}
}
void display()
{
int i;
for(i=front;i<=rear;i++)
printf("%d\n",q[i]);
}
int main()
{
enq(90);
enq(84);
enq(50);
display();
deq();
display();
return 0;
}
