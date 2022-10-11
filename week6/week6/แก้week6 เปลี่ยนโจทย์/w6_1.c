#include <stdio.h>
#include <string.h>
#include <ctype.h>

//จงเขียนโปรแกรมแปลข้อความภาษาอังกฤษให้เป็น Morse Code
void translater(char str[])
{
    char *alphamorse[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
    //morse A-Z
    char *nummorse[] = {"-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----."}; //number 0-9
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] != ' ' && (!isdigit(str[i])))
        {
            printf("%s ", alphamorse[toupper(str[i]) - 65]);
        }
        if (str[i] == ' ')
        {
            printf(" ");
        }
        if (isdigit(str[i])&& str[i]!=' ')
        {
            printf("%s ",nummorse[str[i]-48]);
        }
        i++;
    }
}
int main()
{
    char str[100];
    printf("Enter a sentence :");
    gets(str);
    printf("Morse Code : ");
    translater(str);
    return 0;
}
