#include<stdio.h>
main() 
{ 
int Max, Min, Inpn, x; 
printf("Input #1: "); 
scanf("%d",&Inpn); 
Max = Inpn; 
Min = Inpn;
for(x=2;x<=5;++x) 
{ 
printf("Input #%d: ",x); 
scanf("%d",&Inpn);
if(Inpn>Max) 

{
Max = Inpn;
} 
if(Inpn<Min) 
{
Min = Inpn; 
} 
} 
printf(" The Maximum # is %d\n",Max);
}