#include <stdio.h>
int main()
{   
    
    for (int i=1;i<=5;i++)
    {

        for(int j=1;j<=i;j++)
        {
        int a=j*j;
        printf("%d ",a);
        }
        printf("\n");



    }   



    return 0;
}