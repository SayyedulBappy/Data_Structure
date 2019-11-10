#include<stdio.h>

int main()
{
	char a[50];
	int n,i,j,temp;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the array elements: ");

	for(i=0;i<n;i++)
		scanf("%c",&a[i]);

	for(i=0;i<n;i++){
        for(j=0;j<(n-i);j++){
			if(a[j]>=a[j+1])
			{
				temp=(int)a[j];
				(int)a[j]=(int)a[j+1];
				(int)a[j+1]=temp;
			}

	}
	}
	printf("\nArray after sorting: ");
	for(i=0;i<n;i++){
        printf("%c ",a[i]);
	}
}

