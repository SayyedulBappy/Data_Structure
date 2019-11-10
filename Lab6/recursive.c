#include<stdio.h>
void doRe(int number)
{
    if(number==0)
    {
        printf("%d",number);

    }
    else
    {
        printf("%d",number);
        number=number-1;
        doRe(number);
    }
}
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    doRe(n);

}
