#include<stdio.h>
int stack[5],top=-1;
void push(int data)
{
if(top==4)
printf("stack full\n");
else
{
top++;
stack[top]=data;
}
}
void pop()
{
if(top==-1)
printf("stack empty\n");
else
{
printf("popping out %d\n",stack[top]);
top--;
}
}
void display()
{
int i;
for(i=top;i>=0;i--)
printf("%d\n",stack[i]);
}

int main()
{
push(90);
push(85);
push(54);
display();
pop();
display();
return 0;
}
