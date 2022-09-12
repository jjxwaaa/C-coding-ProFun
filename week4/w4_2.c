#include <stdio.h>
#include <string.h>
void reverseStr(char str[])
{
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++)
    {
        char front = str[i];
        char back = str[n - i - 1];
        str[i] = back;
        str[n - i - 1] = front;
    }
}

int main()
{
    char str[1000];
    printf("Enter a string to reverse :");
    scanf("%[^\n]", &str);
    reverseStr(str);
    printf("Reverse of the string: %s", str);
    return 0;
}