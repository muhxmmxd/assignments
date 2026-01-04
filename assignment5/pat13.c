#include <stdio.h>
int main()
{   
    for (int i=1;i<=6;i++)
    {
        
        char a='A';

        for(int j=1;j<=i;j++)
        {
            printf("%c ",a);
            if (a<=85 )a+=7;
            else a-=19;

        }

            
        printf("\n");


    }   



    return 0;
}