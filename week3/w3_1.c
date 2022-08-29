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
           
            if (( j <= i && j <= 2*n-i) || (j >= i && j >= 2*n-i))
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