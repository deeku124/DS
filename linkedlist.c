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
p=start;
if(start==NULL)
{
temp->next=NULL;
start=temp;
return;
}
while(p->next!=NULL)
{
p=p->next;
}
p->next=temp;
temp->next=NULL;
}

void insertafter(int data,int item)
{
struct node *temp,*p;
p=start;
while(p!=NULL)
{
if(p->info==item)
{
temp=(struct node *)malloc(sizeof(struct node));
temp->info=data;
temp->next=p->next;
p->next=temp;
}
p=p->next;
}
}

void insertbefore(int data,int item)
{
struct node *temp,*p;
if(start==NULL)
printf("list empty\n");
if(start->info==item)
{
temp=(struct node *)malloc(sizeof(struct node));
temp->info=data;
temp->next=start;
start=temp;
}
p=start;
while(p->next->info!=item)
{
p=p->next;
}
temp=(struct node *)malloc(sizeof(struct node));
temp->info=data;
temp->next=p->next;
p->next=temp; 
}

void display(struct node *start)
{
struct node *p=start;
printf("displaying list\n");
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
printf("no.of elements in the list is %d\n",count);
}

void search(int data)
{
struct node *p=start;
int posn=0;
while(p!=NULL)
{
if(p->info==data)
{
printf("data found at %d posn\n",posn);
break;
}
posn++;
p=p->next;
}
}

void delete(int data)
{
struct node *temp,*p;
if(start==NULL)
{
printf("list empty\n");
return;
}
if(start->info==data)
{
temp=start;
start=start->next;
free(temp);
return;
}
p=start;
while(p->next!=NULL)
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
printf("%d data not found\n",data);
}

struct node *reverse(struct node *start)
{
struct node *prev,*ptr,*nxt;
prev=NULL;
ptr=start;
while(ptr!=NULL)
{
nxt=ptr->next;
ptr->next=prev;
prev=ptr;
ptr=nxt;
}
return prev;
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



























