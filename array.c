#include<stdio.h>
void main()
{
    int arr[20],size,i;
    printf("Enter the size of array=");
    scanf("%d",&size);
    printf("Enter the elements of array---");
    for(i=0;i<size;i++)
    {
        printf("\n Enter the %d element",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n Entered array ---\n");
    for(i=0;i<size;i++)
    printf("\t%d",arr[i]);
}
