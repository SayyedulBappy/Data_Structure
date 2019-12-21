#include<stdio.h>

int main()
{
      int a[100],n,i,j,min_index=0,temp;

      printf("Enter size of array: ");
      scanf("%d",&n);
      printf("Enter %d elements:  ",n);
      for(i=0;i<n;i++)
      {
            scanf("%d",&a[i]);
      }
      printf("\nBefore sorting: ");
      for(i=0;i<n;i++)
      {
            printf("%d ",a[i]);
      }

      for(i=0;i<n;i++)
      {
            min_index=i;
            for(j=i+1;j<n;j++)
            {
                  if(a[min_index]>a[j])
                  {
                        temp = a[min_index];
                        a[min_index]=a[j];
                        a[j] = temp;
                  }
            }
      }

      printf("\nAfter sorting: ");
      for(i=0;i<n;i++)
      {
            printf("%d ",a[i]);
      }




}
