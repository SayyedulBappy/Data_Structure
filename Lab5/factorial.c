#include<stdio.h>
int doFact(int n)
{
    if(n==0)
    {
        n=1;

    }
    else
    {
        n=n*doFact(n-1);
    }
    return n;
}
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("%d",doFact(n));
    doFact(n);

}
