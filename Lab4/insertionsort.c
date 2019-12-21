#include<stdio.h>

int main()
{
	int a[50],n,i,j,temp,key;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the array elements: ");

	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    for(i=1;i<n;i++)
    {
       key = a[i];
       j=i-1;
       while(j>0 && a[j]>key)
       {
           a[j+1]=a[j];
           j=j-1;
       }
       a[j+1] = key;
    }

	printf("\nArray after sorting: ");
	for(i=0;i<n;i++){
        printf("%d ",a[i]);
	}
}

