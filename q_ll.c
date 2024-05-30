#include<stdio.h>
#include<stdlib.h>
struct node{
int info;
struct node *next;
};
struct node *start;
void enq(int data)
{
struct node *temp,*p;
temp=(struct node *)malloc(sizeof(struct node));
temp->info=data;
if(start==NULL)
{
temp->next=NULL;
start=temp;
return;
}
p=start;
while(p->next!=NULL)	
	p=p->next;
temp->next=NULL;
p->next=temp;
}
void deq(void)
{
struct node *temp;
if(start==NULL)
printf("queue empty\n");
else if(start->next==NULL)
{
start=start->next;
free(start);
}
else
{
temp=start;
start=start->next;
free(temp);
}
}

void display(void)
{
printf("data dispalying\n");
struct node *p=start;
while(p!=NULL)
{
printf("%d\n",p->info);
p=p->next;
}
}
int main()
{
start=NULL;
enq(90);
enq(84);
enq(50);
display();
deq();
display();
return 0;
}
