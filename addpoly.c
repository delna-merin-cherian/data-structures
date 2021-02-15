#include<stdio.h>
struct poly{
  float coef;
  int exp;
};
struct poly a[50],b[50],c[50],d[50];
void main()
{
  int i,j,deg1,deg2,k=0,l=0,m=0;
    printf("enter the highest deg of poly 1:");
    scanf("%d",&deg1);
    printf("enter the highest deg of poly 2:");
    scanf("%d",&deg2);
    for(i=0;i<=deg1;i++)
     {
       printf("enter the coef ofx^%d",i); 
       scanf("%f",&a[i].coef);
       a[k++].exp=i;
     }
     for(i=0;i<=deg2;i++)
     {
       printf("enter the coef ofx^%d",i); 
       scanf("%f",&b[i].coef);
       a[l++].exp=i;
     }
   printf("expression 1:%.1f",a[0].coef);
   for(i=1;i<=deg1;i++)
     {
       printf("+%.1fx^%d",a[i].coef,a[i].exp); 
     }
    printf("expression 2:%.1f",b[0].coef);
   for(i=1;i<=deg2;i++)
     {
       printf("+%.1fx^%d",b[i].coef,b[i].exp); 
     }
 if(deg1>deg2)
   {
     
   for(i=0;i<=deg2;i++)
     {
       c[m].coef=a[i].coef + b[i].coef;
       c[m].exp=a[i].exp;
       m++;
     }
    for(i=deg2+1;i<=deg1;i++)
     {
       c[m].coef=a[i].coef;
       c[m].exp=a[i].exp;
       m++;
     }
   }
else
  {
    for(i=0;i<=deg1;i++)
     {
       c[m].coef=a[i].coef + b[i].coef;
       c[m].exp=b[i].exp;
       m++;
     }
    for(i=deg1+1;i<=deg2;i++)
     {
       c[m].coef=b[i].coef;
       c[m].exp=b[i].exp;
       m++;
     }
   }
printf("sum of the expresion:%.1f",c[0].coef);
for(i=1;i<m;i++)
     {
       printf("+%.1fx^%d",c[i].coef,c[i].exp); 
     }
}



















       
     
