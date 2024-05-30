#include<stdio.h>
#include<stdlib.h>
struct node{
struct node *prev;
int info;
struct node *next;
};
struct node *start;

void insertatbeg(int data)
{
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
temp->info=data;
if(start==NULL)
{
temp->next=NULL;
temp->prev=NULL;
start=temp;
return;
}
else
{
temp->next=start;
temp->prev=NULL;
start=temp;
}
}

void insertatend(int data)
{
struct node  *temp,*p;
temp=(struct node *)malloc(sizeof(struct node));
temp->info=data;
if(start==NULL)
{
temp->next=NULL;
temp->prev=NULL;
start=temp;
return;
}
p=start;
while(p->next!=NULL)
{
p=p->next;
}
p->next=temp;
temp->next=NULL;
temp->prev=p;
}

void display()
{
struct node *p=start;
printf("display\n");
while(p!=NULL)
{
printf("%d\n",p->info);
p=p->next;
}
}

void delete(int data)
{
struct node *temp,*p;
if(start==NULL)
printf("list empty\n");
else if(start->info==data)
{
temp=start;
start->prev=NULL;
start=start->next;
free(temp);
return;
}
p=start;
while(p->next != NULL)
{
if(p->next->info==data)
{
temp=p->next;
p->next=temp->next;
if(temp->next != NULL){
temp->next->prev=p;}
free(temp);
return;
}
p=p->next;
}
}



int main()
{
start=NULL;
insertatbeg(90);
insertatend(84);
insertatbeg(56);
insertatend(44);
insertatbeg(21);
display();
delete(44);
display();
return 0;
}
