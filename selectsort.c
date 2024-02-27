#include<stdio.h>
#include<stdlib.h>
void selectsort(void)
{
int n,min,temp,i,j;
printf("enter the no of elements\n");
scanf("%d",&n);
int arr[n];
printf("enter the elements into an array\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(arr[j]<arr[min])
{
min=j;
}
if(min!=i)
{
temp=arr[min];
arr[min]=arr[i];
arr[i]=temp;
}
}
}
for(i=0;i<n;i++)
{
printf("%d\n",arr[i]);
}
}



int main()
{
selectsort();
return 0;
}
