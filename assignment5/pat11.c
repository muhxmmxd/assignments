#include <stdio.h>
int main()
{
    int num = 0;
    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
            if (num > 4)
                num = 0;
        }
        printf("\n");
    }

    return 0;
}