#include<stdio.h>
#include<stdlib.h>
void insertsort(void)
{
int n,i,j,key;
printf("enter the array size\n");
scanf("%d",&n);
int arr[n];
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=1;i<n;i++)
{
key=arr[i];
j=i-1;
while(j>=0 && arr[j]>key)
{
arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]=key;
}
printf("elements after sorting\n");
for(i=0;i<n;i++)
{
printf("%d\n",arr[i]);
}
}

int main()
{
insertsort();
return 0;
}

