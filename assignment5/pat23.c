#include <stdio.h>
#include <string.h>
int main()
{   
    int i=5;
    while(i>0)
    {   
        int k=1;
        while(k<i)
        {
            printf(" ");
            k++;
        }

        int j=5;
        while(j>=i){

            printf("%d",i);
            j--;
        }
        printf("\n");

        i--;
    }
    return 0;
}