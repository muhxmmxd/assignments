#include <stdio.h>
#include <string.h>
int main()
{   
    int i=1;
    while(i<=5)
    {   


        int j=5;
        while(j>=i){

            printf("%d",j-i+1);
            j--;
        }
        printf("\n");

        i++;
    }
    return 0;
}