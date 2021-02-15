#include<stdio.h>
void main()
{
   int a[50],i,n,key;
   printf("enter the size of array:");
   scanf("%d",&n);
   printf("enter the elemnts of array:");
   for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      printf("%d",a[i]);
    }
 printf("enter the key to be searched:");
 scanf("%d",&key);
 for(i=0;i<n;i++)
  {
    if(a[i]==key)
     {
       printf("the element %d is found at location %d",key,i+1);
         break;
      }
   }
  if(a[i]!=key)
   {
        printf("element not found");
   }

   
  
}
   
