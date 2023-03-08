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
output:
Enter the size of array=5
Enter the elements of array---
 Enter the 1 element3
 Enter the 2 element32
 Enter the 3 element67
 Enter the 4 element89
 Enter the 5 element4
 Entered array ---
	3	32	67	89	4
