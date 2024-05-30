#include<stdio.h>
void linearsearch(void)
{
int n,i,data;
printf("enter array size\n");
scanf("%d",&n);
int arr[n];
printf("enter elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("enter data to search\n");
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
printf("data not found\n");
}

int main()
{
linearsearch();
return 0;
}
