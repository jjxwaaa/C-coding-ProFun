#include<stdio.h>
int main ()
{
   int n;
   printf("Enter number : ");
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       printf("*");
   }
   return 0;
}