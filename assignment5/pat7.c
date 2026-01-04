#include <stdio.h>
int main()
{   
    
    char a='E';
    for (int i=5;i>0;i--)
    {
        
        for(int j=1;j<=i;j++)
        printf("%c",a);
        a--;
        printf("\n");


    }   



    return 0;
}