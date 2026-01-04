#include <stdio.h>
#include <math.h>
int main()
{   
    

    for (int i=1;i<=5;i++)
    {
        
        for(int j=5;j>i;j--)
        {
            printf("   ");


        }
       
        for (int k=1;k<=i;k++)
        {
            int ans=pow(i-k+1,3);
            printf("%d ",ans);



        }


        printf("\n");


    }   



    return 0;
}