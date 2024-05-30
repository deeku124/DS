#include<stdio.h>
void bubblesort(int arr[],int n)
{
int i,j;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
if(arr[j+1]<arr[j])
{
int temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
for(i=0;i<n;i++)
printf("%d\n",arr[i]);
}
int main()
{
int n,i;
printf("enter array size\n");
scanf("%d",&n);
int arr[n];
printf("array elents enter\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
bubblesort(arr,n);
return 0;
}
