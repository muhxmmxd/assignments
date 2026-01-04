#include <stdio.h>
#include <string.h>
int main()
{   
    char C[8];
    printf("Enter a string with less than or equal to 8 characters:");


    scanf("%s",C);

    for (int i=7;i>=0;i--)
    {  
        for(int j=0;j<=i;j++)
        printf("%c",C[j]);
        printf("\n");
    }

    return 0;
}