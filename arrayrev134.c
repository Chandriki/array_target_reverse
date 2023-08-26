#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[20],n,i,j,k,target;
    printf("array size:\n");
    scanf("%d",&n);
    printf("enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the target index");
    scanf("%d\n",&target);
   for(j=0;j<=target;j++)
    {
      printf("%d\n",arr[j]);
    }
    for(k=(n-1);k>target;k--)
    {
        printf("%d\n",arr[k]);
    }
    getch();
}
