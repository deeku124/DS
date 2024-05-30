#include<stdio.h>
void selectsort(void)
{
int i,n,min,j;
printf("enter array size\n");
scanf("%d",&n);
int arr[n];
printf("enter elments\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
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
int temp=arr[min];
arr[min]=arr[i];
arr[i]=temp;
}
}
}
printf("array after sorting\n");
for(i=0;i<n;i++)
printf("%d\n",arr[i]);
}
int main()
{
selectsort();
return 0;
}
