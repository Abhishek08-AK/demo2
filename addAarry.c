#include<stdio.h>
void main()
{
    int arr[10],i,sum=0;
    for(i=0;i<10;i++)
    {
        printf("Enter the value of arr[%d]: ",i);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("sum=%d",sum);
    getch();
}
