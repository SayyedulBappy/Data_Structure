#include<stdio.h>

void enqueue(int item);
int dequeue();
void traverse();
int front=0, rear=0;
int N=20;
int queue[N];
int main()
{
int choice,item;
while( choice!=4 )
{
printf("\n\n");
printf(" ******* QUEUE OPERATIONS ********* \n\n");
printf("1- Enqueue item \n2- Dequeue Item \n");
printf("3- Traverse / Display Queue Items \n");
printf("4- Exit.");
printf(" \n\nYour choice ---> ");
scanf("%d",&choice);

switch(choice)
{

case 1:

printf("\n Enter a number: ");
scanf("%d",&item);
enqueue(item);

break;
case 2:

item=dequeue();
printf("\n deleted from Queue = %d\n",item);

break;
case 3:

printf("\n List of Items pushed on Queue:\n");
traverse();
break;
case 4:
break;

default:
printf("\n\n\t Invalid Choice: \n");

}
}
}
void enqueue(int item)
{
      if(rear==N-1){printf("Queue overflow\n");}
      else{
            rear=rear+1;
            queue[rear]=item;
      }
}

int dequeue()
{     int item;
      if(front>=rear){printf("Queue Empty\n");}
      else{
            front=front+1;
            item=queue[front];
            queue[front]=-1;
            return item;
      }
}
void traverse()
{
      int item;
      for(item=front+1;item<=rear;item++){
            printf("%d ",queue[item]);
      }

}
