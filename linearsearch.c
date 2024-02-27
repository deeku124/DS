#include<stdio.h>
#include<stdlib.h>
void linearsearch(void)
{
int n,data,i;
printf("enter no of elements \n");
scanf("%d",&n);
int arr[n];
printf("enter elements into the array\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the dat ato be searched\n");
scanf("%d",&data);
for(i=0;i<n;i++)
{
if(arr[i]==data)
{
printf("data found at %d posn\n",i);
break;
}
}
if(i==n)
printf("data %d not found\n",data);
}


int main()
{
printf("linear search\n");
linearsearch();
return 0;
}
