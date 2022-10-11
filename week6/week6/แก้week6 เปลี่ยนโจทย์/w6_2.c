#include <stdio.h>
#include <string.h>
#include <ctype.h>

//จงเขียนโปรแกรมแปลข้อความภาษาอังกฤษให้เป็น Morse Code
int choose(char* a,char b)
{
    for (size_t i = 0; i < strlen(a); i++)
    {
       if(b==a[i])
       {
           return i;
       }
    }
    return -1;
}
void translater(char str[])
{
    char a[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char* m[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..","-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----."};
    for (size_t i = 0; i < strlen(str); i++)
    {
        int position = choose(a,toupper(str[i]));
        if(position!=-1)
        {
            printf("%s ",m[position]);
        }
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
/*
A    .-
B	-...
C	-.-.
D	-..
E	.
F	..-.
G	--.
H	....
I	..
J	.---
K	-.-
L	.-..
M	--
N	-.
O	---
P	.--.
Q	--.-
R	.-.
S	...
T	-
U	..-
V	...-
W	.--
X	-..-
Y	-.--
Z	--..
Digit	Morse
0	-----
1	.----
2	..---
3	...--
4	....-
5	.....
6	-....
7	--...
8	---..
9	----.
*/