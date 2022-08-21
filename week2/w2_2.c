#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void printstar(int n)
{
    if (n > 0)
    {
        printf("*");
        printstar(n - 1);
    }
}
int main()
{
    int a;
    printf("Enter number : ");
    scanf("%d", &a);
    printstar(a);
    return 0;
}