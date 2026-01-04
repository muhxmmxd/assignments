#include <stdio.h>
int main()
{   
    char a='A';
    int num=1;
    for (int i=0;i<5;i++)
    {


        for(int j=5;j>i;j--)
        printf(" ");
        for(int k=0;k<=i;k++)
        {
            if(i%2==1) printf("%d",num);
            else  printf("%c", a); 


        }
        if(i%2==1) num++;
        else a++;
        printf("\n");


    }   
    return 0;



    
}