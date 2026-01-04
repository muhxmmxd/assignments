#include <stdio.h>
#include <string.h>
int main()
{   
    for(int a=1;a<=5;a++)
    {
        for(int x=0;x<4;x++)
            printf("  ");

        for(int b=1;b<=a;b++)
            printf("%d ",b);
        printf("\n");

    }
    
    int i=1;
    while(i<=5)
    {   


        for(int k=1;k<i;k++)
            printf("  ");
        int j=5;
        while(j>=i){

            printf("%d ",j);
            j--;
        }
        printf("\n");

        i++;
    }
    return 0;
}