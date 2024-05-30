#include<stdio.h>
#include<stdlib.h>

struct node
{
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
start=temp;
}
else
{
temp->next=start;
start=temp;
}
}

void insertatend(int data)
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
while(p->next != NULL)
{
p=p->next;
}
temp->next=NULL;
p->next=temp;
}

void insertafter(int data,int item)
{
struct node *temp,*p;
temp=(struct node *)malloc(sizeof(struct node));
temp->info=data;
while(p !=NULL)
{
if(p->info==item)
{
temp->next=p->next;
p->next=temp;
}
p=p->next;
}
}

void insertbefore(int data,int item)
{
struct node *temp,*p;
temp=(struct node *)malloc(sizeof(struct node));
temp->info=data;
if(start->info==item)
{
temp->next=start;
start=temp;
}
p=start;
while(p->next->info != item)
{
p=p->next;
}
temp->next=p->next;
p->next=temp;
}

void display(struct node *start)
{
struct node *p=start;
printf("displaying elements\n");
while(p!=NULL)
{
printf("%d\n",p->info);
p=p->next;
}
}

void count(struct node *start)
{
struct node *p=start;
int count=0;
while(p!=NULL)
{
count++;
p=p->next;
}
printf("%d\n",count);
}

void search(int data)
{
struct node *p=start;
int posn=0;
while(p->info != data)
{
posn++;
p=p->next;
}
printf("%d found at %d\n",data,posn);
}

void delete(int data)
{
struct node *temp,*p;
if(start==NULL)
return;
if(start->info==data)
{
temp=start;
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
free(temp);
return;
}
p=p->next;
}
}

struct node *reverse(struct node *start)
{
struct node *prev,*ptr,*next,*p;
prev=NULL;
ptr=start;
while(p!=NULL)
{
next=ptr->next;
ptr->next=prev;
prev=ptr;
ptr=next;
}
return ptr;
}





int main()
{
start=NULL;
int choice,data,item;
while(1)
{
printf("enter choice\n");
printf("1.insert at beginning\n");
printf("2.insert at end\n");
printf("3.insert after\n");
printf("4.insert before\n");
printf("5.display\n");
printf("6.count\n");
printf("7.search given data\n");
printf("8.delete\n");
printf("9.reverse\n");
printf("10.quit\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter data to list\n");
scanf("%d",&data);
insertatbeg(data);
break;
case 2:
printf("enter data to list\n");
scanf("%d",&data);
insertatend(data);
break;
case 3:
printf("enter data to list\n");
scanf("%d",&data);
printf("enter data after which data is to be inserted\n");
scanf("%d",&item);
insertafter(data,item);
break;
case 4:
printf("enter data to list\n");
scanf("%d",&data);
printf("enter data before which data is to be inserted\n");
scanf("%d",&item);
insertbefore(data,item);
break;
case 5:
display(start);
break;
case 6:
count(start);
break;
case 7:
printf("enter data to be searched\n");
scanf("%d",&data);
search(data);
break;
case 8:
printf("enter data to be deleted\n");
scanf("%d",&data);
delete(data);
break;
case 9:
start=reverse(start);
break;
case 10:
exit(1);
break;
default:
printf("enter valid choice\n");
}
}
return 0;
}
