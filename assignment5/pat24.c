#include <stdio.h>
#include <string.h>
int main()
{   
    char C[8];
    printf("Enter a string with less than or equal to 8 characters:");
    
    
    scanf("%s",C);


    for (int i=7;i>=0;i--)
    {  
        for(int k=0;k<i;k++)
        printf(" ");


        for(int j=7;j>=i;j--)
        printf("%c",C[j]);
        printf("\n");
    }

    return 0;
}