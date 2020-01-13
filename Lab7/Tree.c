#include<stdio.h>

int leftChild(int i);
int rightChild(int i);
void preOrder(int index);
void inOrder(int index);
void postOrder(int index);
void search(int item);

int tree[200];
int maxNode;
int item;
int main()
{
    int i ;
    printf("How many numbers: ");
    scanf("%d",&maxNode);

    printf("Enter tree data: ");
    for(i=1;i<=maxNode;i++)
    {
        scanf("%d ",&tree[i]);
    }

printf("preOrder: ");
   preOrder(1);
   printf("\n");

   printf("inOrder: ");
   inOrder(1);
      printf("\n");

   printf("postOrder: ");
   postOrder(1);
      printf("\n");

      printf("Enter item to search: ");
      scanf("%d",&item);
    //  search(1);

}

int leftChild(int i)
{
    int left = 2*i;
    if(left<=maxNode)
    {
        return left;
    }
    else
    {
        return -1;
    }

}
int rightChild(int i)
{
    int right = 2*i+1;
    if(right<=maxNode)
    {
        return right;
    }
    else
    {
        return -1;
    }
}


void preOrder(int index)
{
    if(index>0)
    {
        printf("%d ",tree[index]);
        preOrder(leftChild(index));
        preOrder(rightChild(index));
    }
}
void inOrder(int index)
{
    if(index>0)
    {
        preOrder(leftChild(index));
        printf("%d ",tree[index]);
        preOrder(rightChild(index));
    }
}
void postOrder(int index)
{
    if(index>0)
    {
        preOrder(leftChild(index));
        preOrder(rightChild(index));
        printf("%d ",tree[index]);
    }

}

void search(int index)
{
    if(index>0)
    {
        if(tree[index]==item)
        {
            printf("Node found at  %d \n",index);
        }
       // printf("%d ",tree[index]);
        search(leftChild(index));
        search(rightChild(index));
    }
}
