#include<stdio.h>
#include<stdlib.h>
void main()
 {
     int r,c,r2,c2,i,j;
     printf("enter the row and column of first matrix-->");
     scanf("%d%d",&r,&c);
     printf("enter the row and column of second matrix-->");
     scanf("%d%d",&r2,&c2);
     int *arr=malloc(r*c*sizeof(int));
     int *arr2=malloc(r2*c2*sizeof(int));
     printf("enter the elements of matrix 1:");
     read(arr,r,c);
     display(arr,r,c);
     printf("enter the elements of matrix 2:");
     read(arr2,r2,c2);
     display(arr2,r2,c2);
     printf("tuple form of matrix 1:");
     tuple(arr,r,c);
     printf("tuple form of matrix 2:");
     tuple(arr2,r2,c2);
     printf("transpose of tuple form of matrix 1:");
     transpose(arr,c,r);
     printf("transpose of tuple form of matrix 2:");
     transpose(arr2,c2,r2);
     printf("sum of matrices:sum=");
     sum(arr,arr2,r,c,r2,c2);
     free(arr);
     free(arr2);
 }
void read(int *x,int m,int n)
 {
     int i,j;
     for(i=0;i<m;i++)
     {
          for(j=0;j<n;j++)
           {
             scanf("%d",&*(x+i*n+j));
            }
      }
}
void display(int *x,int m,int n)
 {
     int i,j;
     for(i=0;i<m;i++)
     {
          for(j=0;j<n;j++)
           {
             printf(" %d ",*(x+i*n+j));
            }
        printf("\n");
      }
}
void tuple(int *x,int m,int n)
{
     int i,j;
     printf("(");
     for(i=0;i<m;i++)
     {
          for(j=0;j<n;j++)
           {
             printf("(%d %d %d)",i,j,*(x+i*n+j));
            }
      }
      printf(")\n");
}
void transpose(int *x,int m,int n)
{
     int i,j;
     printf("(");
     for(i=0;i<m;i++)
     {
           printf("(");
          for(j=0;j<n;j++)
           {
            if(j==n-1)
            {
             printf("%d",*(x+j*n+i));
            }
            else
            {
              printf(" %d ",*(x+j*n+i));
            }
           }
          printf(")");
      }
      printf(")\n");
}
void sum(int *x,int *y,int m,int n,int p,int q)
{
     int i,j;
    if(m==p && n==q)
     printf("(");
     for(i=0;i<m;i++)
     {
           printf("(");
          for(j=0;j<n;j++)
           {
            if(j==n-1)
            {
             printf(" %d ",*(x+i*n+j)+*(y+i*n+j));
            }
            else
            {
              printf(" %d ",*(x+i*n+j)+*(y+i*n+j));
            }
           }
          printf(")");
      }
      printf(")\n");
}








