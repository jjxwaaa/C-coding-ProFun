#include <stdio.h>

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int boxsize = 2 * n - 1;
    for (size_t j = 1; j <= boxsize; j++)
    {
        for (size_t i = 1; i <= boxsize; i++)
        {
           
            if ((j <= i || j >= boxsize - i + 1)&& !(j < i && j > boxsize - i + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}