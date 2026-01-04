#include <stdio.h>
int main()
{   
    int rup;
    printf("Enter amount in rupees:");
    scanf("%d",&rup);

    
        int a=rup/2000;
        printf("Number of 2000 rupees notes: %d\n",a);
        int remaining=rup%2000;
        a=remaining/500;
        printf("Number of 500 rupee notes: %d\n",a);
        
        remaining=remaining%500;
        a=remaining/200;
        printf("Number of 200 rupee notes: %d\n",a);
        
        remaining=remaining%200;
        a=remaining/100;
        printf("Number of 100 rupee notes: %d\n",a);
        
        remaining=remaining%100;
        a=remaining/50;
        printf("Number of 50 rupee notes: %d\n",a);
        
        remaining=remaining%50;
        a=remaining/20;
        printf("Number of 20 rupee notes: %d\n",a);

        remaining=remaining%20;
        a=remaining/10;
        printf("Number of 10 rupee notes: %d\n",a);

        remaining=remaining%10;
        a=remaining/5;
        printf("Number of 5 rupee notes: %d",a);
        


    

    return 0;
}