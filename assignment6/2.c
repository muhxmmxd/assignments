#include<stdio.h>
int main()
{
    int arr[]={1,-3,4,3,2,1,5,8,-9};
    printf("The negative elements of the array are:");
    for(int i=0;i<9;i++)
    {
        if (arr[i]<0)
        printf("%d ",arr[i]);
    }

    return 0;
}