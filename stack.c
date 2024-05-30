#include<stdio.h>
#include<stdlib.h>
int stack[5]={'\0'},top=-1;

void push(int data)
{
if(top==4)
{
printf("stack full\n");
}
else
{
top++;
stack[top]=data;
}
}

void pop()
{
if(top==-1)
{
printf("stack empty\n");
}
else
{
printf("popping top element %d\n",stack[top]);
top--;
}
}

void count()
{
int i,count=0;
if(top==-1)
{
printf("stack empty\n");
}
else
{
for(i=top;i>=0;i--)
count++;
printf("%d\n",count);
}
}

void display()
{
if(top==-1)
{
printf("stack empty\n");
}
else
{
for(int i=top;i>=0;i--)
printf("%d",stack[i]);
}
}



int main()
{
int choice,data;
while(1)
{
printf("enter choice\n");
printf("1.push\n");
printf("2.pop\n");
printf("count\n");
printf("4.display\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter data to put into stack\n");
scanf("%d",&data);
push(data);
break;
case 2:
printf("popping data\n");
pop();
break;
case 3:
printf("counting elements\n");
count();
break;
case 4:
printf("displaying elements\n");
display();
break;
case 5:
exit(1);
break;
default:
printf("enter proper choice\n");
}
}
return 0;
}
