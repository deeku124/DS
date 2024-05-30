#include<stdio.h>
#include<stdlib.h>
struct node{
int info;
struct node *next;
};
struct node *start;
void push(int data)
{
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
temp->info=data;
if(start==NULL)
{
temp->next=NULL;
start=temp;
}
else
{
temp->next=start;
start=temp;
}
}

void pop()
{
struct node *temp;
if(start==NULL)
printf("list empty\n");
else if(start->next==NULL)
{
start=start->next;
free(start);
return;
}
else
{
temp=start;
start=start->next;
free(temp);
return;
}
}

void display()
{
struct node *p=start;
while(p != NULL)
{
printf("%d\n",p->info);
p=p->next;
}
}


int main()
{
start=NULL;
push(90);
push(54);
push(80);
display();
pop();
display();
return 0;
}
