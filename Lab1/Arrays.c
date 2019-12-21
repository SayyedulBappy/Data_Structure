#include<stdio.h>

int main(){

    int a[200],i,n;
// assigning elements
    printf("How many elements: ");
    scanf("%d",&n);

    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
// printing elements
    printf("The elements are: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
// adding more elements
    int m;
    printf("\nHow many more elements: ");
    scanf("%d",&m);

    printf("Enter the elements: ");
    for(i=n;i<n+m;i++){
        scanf("%d",&a[i]);
    }
// printing elements
    printf("The elements are: ");
    for(i=0;i<n+m;i++){
        printf("%d ",a[i]);
    }


// deleting elements

    int del,deli;

    printf("\nwhich element you want to delete: ");
    scanf("%d",&del);

    for(i=0;i<n+m;i++){
        if(a[i]==del){
            deli=i;
        }
    }


    for(i=deli;i<n+m;i++){

        a[i]=a[i+1];
    }
// printing elements
    printf("The elements are: ");
    for(i=0;i<n+m-1;i++){
        printf("%d ",a[i]);
    }

}
