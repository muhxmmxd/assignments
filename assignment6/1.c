#include <stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6};
    printf("The elements of array:\n");
    for (int i=0;i<5;i++)
    printf("%d ", arr[i]);

    printf("\n");

    printf("The elements of array in reverse order:\n");
    for (int i=4;i>-1;i--)
    printf("%d ", arr[i]);
    




    return 0;
}
