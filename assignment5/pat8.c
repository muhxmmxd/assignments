#include <stdio.h>
int main()
{   
    int print; 
    for (int i=1;i<=5;i++)
    {
        if(i%2==0) print=1;
        else print=0;
        
        for( int j=1;j<=i;j++)
        {
        printf("%d",print);
        }
        
            
        printf("\n");


    }   



    return 0;
}