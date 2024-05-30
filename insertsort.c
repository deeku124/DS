#include<stdio.h>
void insertsort(void)
{
int i,n,key,j;
printf("enter array size\n");
scanf("%d",&n);
int arr[n];
printf("enter elments\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=1;i<n;i++)
{
key=arr[i];
j=i-1;
while(j>=0&&key<arr[j])
{
arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]=key;
}
printf("array after sorting\n");
for(i=0;i<n;i++)
printf("%d\n",arr[i]);
}
int main()
{
insertsort();
return 0;
}
