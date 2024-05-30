#include<stdio.h>
#include<stdlib.h>
struct node{
int info;
struct node *next;
};
struct node *start;
void insert(int data)
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

void display()
{
printf("display\n");
struct node *p=start;
while(p!=NULL)
{
printf("%d\t",p->info);
p=p->next;
}
}

void sort()
{
struct node *p,*temp;
for(p=start;p!=NULL;p=p->next)
{
for(temp=p->next;temp!=NULL;temp=temp->next)
{
if(p->info >temp->info)
{
int tmp=p->info;
p->info=temp->info;
temp->info=tmp;
}
}
}
}

int main()
{
start=NULL;
insert(23);
insert(12);
insert(90);
insert(84);
insert(56);
display();
sort();
display();
return 0;
}
