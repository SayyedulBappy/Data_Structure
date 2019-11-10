#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c,d;
    double x1,x2;

    printf("Enter values: ");
    scanf("%d%d%d",&a,&b,&c);

   d=b*b-4*a*c;

if(d<0){

      printf("x1: %f + i%f \n",-b/(double)2*a,sqrt(-d)/(2*a));
      printf("x2: %f - i%f ",-b/(double)2*a,sqrt(-d)/(2*a));
}

else{
    x1=(-b+(sqrt(d)))/(2*a);
    x2=(-b-(sqrt(d)))/(2*a);

    printf("x1=%f, x2=%f",x1,x2);
}
    return 0;
}
