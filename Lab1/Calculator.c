#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,b;
      int c;
    printf("Enter a value: ");
    scanf("%d",&a);
    printf("Enter a value: ");
    scanf("%d",&b);
    if(a>b){
      c=a%b;
    }
    else{
      c=b%a;
    }

    printf("%d mod %d: %d",a,b,c);
    return 0;
}
