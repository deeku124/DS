#include<stdio.h>
void binarysearch(void)
{
int n,i,data,start,end,mid;
printf("enter array size\n");
scanf("%d",&n);
int arr[n];
printf("enter elements\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("enter data to search\n");
scanf("%d",&data);
start=0;
end=n-1;
while(start<=end)
{
mid=(start+end)/2;
if(arr[mid]==data)
{
printf("data found at %d posn\n",mid);
break;
}
else if(arr[mid]>data)
{
end=mid-1;
//mid=(start+end)/2;
}
else if(arr[mid]<data)
{
start=mid+1;
//mid=(start+end)/2;
}
}
if(start>end)
printf("data not found\n");
}
int main()
{
binarysearch();
return 0;
}
