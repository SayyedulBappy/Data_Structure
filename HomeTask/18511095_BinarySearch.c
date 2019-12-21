#include <stdio.h>


int binarySearch(int arr[], int left, int right, int item)
{
    while (left <= right) {
        int mid = left + (right - left) / 2;


        if (arr[mid] == item)
            return mid;


        if (arr[mid] < item)
            left = mid + 1;

        else
            right = mid - 1;
    }


    return -1;
}

int main(void)
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
    int result = binarySearch(arr, 0, n - 1, item);
    if(result == -1) {
            printf("Element is not present in array");
    }
    else {
            printf("Element is present at index %d",result);
    }

    return 0;
}
