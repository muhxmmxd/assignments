#include <stdio.h>
int main()
{   
    int i,j,k,l;
    for (i=1;i<=5;i++)
    {

        for(j=5;j>i;j--)
             printf("  ");
        for (k=1;k<=i;k++)
        {
            if(k==1) printf("* ");
            else printf("  ");
        }
        for(l=1;l<i;l++ )
        {

            if(l==i-1)printf("* ");
            else printf("  "); 
        }
        printf("\n");


    }   
    int a,b,c,d;
    for (a=1;a<=4;a++)
    {
        for(b=1;b<=4;b++)
        { 
            if(a==b-1) printf("* ");
            else printf("  ");
           
        }
        for(d=4;d>a;d--) printf("  ");
    
    printf("* ");
    printf("\n");

        

    }
    return 0;
}