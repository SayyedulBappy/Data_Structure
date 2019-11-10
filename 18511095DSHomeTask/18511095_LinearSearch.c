#include <stdio.h>

int search(int arr[], int n, int item)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == item)
            return i;
    return -1;
}

int main()
{
    int arr[100],i,n;
    printf("How many elements in array: ");
    scanf("%d",&n);
    printf("Enter %d integers to make an array: ",n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int item;
    printf("Enter an integer to search: ");
    scanf("%d",&item);

    int result = search(arr, n, item);
    if(result == -1) {
            printf("Element is not present in array");
    }
    else {
            printf("Element is present at index %d",result);
    }

    return 0;
}
