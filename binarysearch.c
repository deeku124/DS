#include<stdio.h>
#include<stdlib.h>
void binsearch(void)
{
int n,data,i,start=0,mid;
printf("enter no of elements\n");
scanf("%d",&n);
int arr[n];
printf("enter elements into array\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the data to be searched\n");
scanf("%d",&data);
int end=n-1;
while(start<end)
{
mid=(start+end)/2;
if(arr[mid]==data)
{
printf("%d present at %d posn\n",data,mid);
break;
}
else if(arr[mid]<data)
{
start=mid+1;
mid=(start+end)/2;
}
else if(arr[mid]>data)
{
end=mid-1;
mid=(start+end)/2;
}
}
if(start>end)
printf("%d not found\n",data);
}


int main()
{
printf("binary search\n");
binsearch();
return 0;
}
