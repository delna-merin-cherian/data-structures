#include<stdio.h>
int stack[100],choice,n,top,i,x;
void push(void);
void pop(void);
void display(void);
int main()
{
  top=-1;
  printf("enter the size of stack:");
  scanf("%d",&n);
  printf("STACK USING ARRAY");
  printf("\t--------------------------------\t");
  printf("\t 1.push\n\t 2.pop\n\t 3.display\n\t 4.exit");
  do{
  printf("enter which operation is to be performed:");
  scanf("%d",&choice);
  switch(choice)
    {
       case 1:
            { 
              push();
              break;
             }
      case 2:
            { 
              pop();
              break;
             }
      case 3:
            { 
              display();
              break;
             }
      case 4:
            { 
              printf("exit");
              break;
             }
       default:
            { 
              printf("please enter a valid choice");
             }
       }
     }
   while(choice!=4);
       return 0;
 }
void push()
{
  if(top>=n-1)
   {
       printf("stack overflow");
    }
  else
    {
      printf("enter the value to be pushed:");
      scanf("%d",&x);
      top++;
      stack[top]=x;
    }
}
void pop()
{
  if(top<=-1)
   {
       printf("stack empty");
    }
  else
    {
      printf("the popped element is %d",stack[top]);
      top--;
     
    }
}
void display()
{
  if(top>=0)
   {
       printf("the elements in the stack are ");
       for(i=top;i>=0;i--)
         {
            printf("%d\n",stack[i]);
         }
       printf("\nenter next valid choice:");
    }

  else
    {
      printf("Stack is empty");
     
    }
}























