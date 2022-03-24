#include<stdio.h>
#include<math.h>
int main()
{
  int a[10],i,j,temp,n,first,last,mid,key;
  printf("enter two integers");
  scanf("%d",&n);
  printf("enter %d the integer",n);
  for(j=0;j<n;j++)
  {
    scanf("%d",&a[j]);
  }
   for(i=0;i<n-1;i++)
   {
   for(j=0;j<n-1-i;j++)
    {
      if(a[j]>a[j+1])
       {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
       }
     }
   }
  printf("sorted list in ascending order:\n");
  for(i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }
  first=0;
  last=n-1;
  printf("enter key element");
  scanf("%d",&key);
  while(first<=last)
  {
   mid=(first+last)/2;
   if(key=a[mid])
   { 
     printf("element %d found at %d",key,mid+1);
     return 1;
   }
   else if(key<a[mid]);
   {
     last=mid-1;
   }
   else first=mid+1;
 }
 printf("element %d not found",key);
 return 0;
}
