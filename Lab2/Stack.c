// A Program that exercise the operations on Stack Implementing Array
// i.e. (Push, Pop, Peak and Traverse)
#include <stdio.h>
// global variable and array declaration
int TOP=-1; // Initially Stack is empty
int Stack[20]; // Array for Stack
// functions prototyping
void Push(int itm);
int POP( );
int Peak( );
int IsEmpty( );
int IsFull( );
void Traverse( );
int main( )
{
int item, choice;
while( choice!=5 )
{
printf("\n\n");
printf(" ******* STACK OPERATIONS ********* \n\n");
printf("1- Push item \n2- Pop Item \n");
printf("3- Peak (Top Item) \n4- Traverse / Display Stack Items \n");
printf("5- Exit.");
printf(" \n\nYour choice ---> ");
scanf("%d",&choice);
switch(choice)
{

case 1:

printf("\n Enter a number: ");
scanf("%d",&item);
Push(item);

break;
case 2:

item=POP();
printf("\n deleted from Stack = %d\n",item);

break;
case 3:

item=Peak();
printf("\n Peak of Stack (Top) = %d\n",item);

break;
case 4:
printf("\n List of Item pushed on Stack:\n");
Traverse();
break;
case 5:
break;
default:
printf("\n\n\t Invalid Choice: \n");
} // end of switch block
} // end of while loop
} // end of of main() function

void Push(int item)
{
      TOP = TOP +1;
if(IsFull())printf("\n Stack Full/Overflow\n");
else
{

      Stack[TOP]=item;
}

}
int POP( )
{     int data;
      TOP--;
      if(IsEmpty()){printf("\n Stack Empty/Underflow\n");}
      else{

            data = Stack[TOP+1];
            return data;
      }

}
int Peak( )
{
int data;

}
int IsEmpty( )
{
if(TOP<0){
      return 1;
}
else return 0;
}

int IsFull( )
{
      if(TOP>=20){
            return 1;
      }
      else return 0;
}
void Traverse( )
{     int i;
      for(i=0;i<=TOP;i++){
            printf("%d ",Stack[i]);
      }
}
