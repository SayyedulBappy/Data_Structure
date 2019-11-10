#include<stdio.h>
struct person
{
    int age;
    char name[30], address[100], blood[2], contact[20];
};
int main()
{
    struct person *ptr;
    int i,n;
    printf("Enter the number of persons: ");
    scanf("%d",&n);
    ptr=(struct person*) malloc(n* sizeof(struct person));
  for(i=0;i<n;++i)
  {
      printf("Enter Name: ");
      scanf("%s",&(ptr+i)->name);
      printf("Enter Age: ");
      scanf("%d",&(ptr+i)->age);
      printf("Enter Address: ");
      scanf("%s",&(ptr+i)->address);
      printf("Enter Blood Group: ");
       scanf("%s",&(ptr+i)->blood);
      printf("Enter Contact No: ");
      scanf("%d",&(ptr+i)->contact);





  }
  printf("displaying information:\n");
  for(i=0;i<n;++i)
    printf("Name : %s\nAge : %d\nAddress : %s\nBlood group : %s\nMobile number : %d\n",(ptr+i)->name,(ptr+i)->age,(ptr+i)->address,(ptr+i)->blood,(ptr+i)->contact);
    return 0;
}
