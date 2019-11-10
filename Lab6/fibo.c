#include<stdio.h>

int Fibo(int);

int main()
{
   int n, i = 0, c;

   scanf("%d",&n);

   printf("Fibonacci series\n");

   for ( c = 1 ; c <= n ; c++ )
   {
      printf("%d\n", Fibo(i));
      i++;
   }

   return 0;
}

int Fibo(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
    n=( Fibo(n-1) + Fibo(n-2) );
      return n;
}
