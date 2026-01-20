#include <stdio.h>
#include <string.h>
int main()
{
    int a = 1;
    while (a <= 5)
    {
        int x = 0;
        while (x < 4)
        {
            printf("  ");
            x++;
        }

        int b = 1;
        while (b <= a)
        {
            printf("%d ", b);
            b++;
        }
        printf("\n");

        a++;
    }

    int i = 1;
    while (i <= 5)
    {

        int k = 1;
        while (k < i)
        {
            printf("  ");
            k++;
        }
        int j = 5;
        while (j >= i)
        {

            printf("%d ", j);
            j--;
        }
        printf("\n");

        i++;
    }
    return 0;
}