#include <stdio.h>
#include <string.h>
void convert(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - ('a' - 'A');
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + ('a' - 'A');
        }
    }
    puts(str);
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