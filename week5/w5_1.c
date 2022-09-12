#include <stdio.h>
#include <ctype.h>
void convert(char str[])
{
    int i = 0;
    char c;
    while (str[i])
    {
        c = str[i];
        if (islower(c))
        {
            c = toupper(c);
            putchar(c);
            i++;
        }
        else if (isupper(c))
        {
            c = tolower(c);
            putchar(c);
            i++;
        }
    }
}
int main()
{
    char str[100];
    printf("INPUT STRING TO CONVERT :");
    gets(str);
    printf("CONVERT TEXT STRING IS : ");
    convert(str);
    return 0;
}