#include<stdio.h>
# define MAX 5
int cqueue[MAX];
int front=-1;
int rear=-1;
void main()
{
int choice,item;
printf("CIRCULAR QUEUE IMPLEMENTATION");
do{

       printf("\t\n1.ENQUEUE\t\n2.DEQUEUE\t\n3.DISPLAY\t\n4.EXIT\t\nEnter a choice:");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
           printf("enter the element to be inserted:");
           scanf("%d",&item);
           enqueue(item);
            break;
       case 2:
             dequeue();
             break;
       case 3:
             display();
            break;
        case 4:
             break;
        default:
           printf("enter a valid choice");
       }
   }while(choice!=4);
 }
void enqueue(int item)
{
    if((front==0 && rear==MAX-1)||(front==rear+1))
       {
         printf("queue overflow");
       }
     if(front==-1)
      {
         front=0;
         rear=0;
      }
     else
     {
       if(rear==MAX-1)
         {
           rear=0;
          }
        else
         { 
           rear++;
          }
      }
      cqueue[rear]=item;
       
}
void dequeue()
{
   if(front==-1)
    {
       printf("underflow");
    }
 printf("the element dequeued is %d",cqueue[front]);
   if(front==rear)
   {
    front=rear=-1;
    }
   else
    {
      if(front==MAX-1)
       {
         front=0;
        }
      else
       {
          front++;
       }
     }
}
void display()
{
   int frontpos=front,rearpos=rear;
   if(frontpos<=rearpos)
     {
       while(frontpos<=rearpos)
         {
              printf("%d",cqueue[frontpos]);
               frontpos++;
         }
     }
    else
       {
         while(frontpos<=MAX-1)
         {
              printf("%d",cqueue[frontpos]);
               frontpos++;
         }
        frontpos=0;
          while(frontpos<=rearpos)
         {
              printf("%d",cqueue[frontpos]);
               frontpos++;
         }
     }
}

































