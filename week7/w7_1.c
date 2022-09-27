#include <stdio.h>
#include <stdlib.h> 
int main()
{
	printf("Enter a number (100-995) : ");
int i,temp,total=0;
scanf("%d",&i);
int sum = 0,sum2=0,check=1,swap,n=1;
temp=i;
if(i >= 100 && i <= 995)
{
  while(n!=6)
  {
	i=temp;
	  while (check !=4) {
  		swap=i;
	    if(check==1)
      {
   		  sum2 = sum2 + ((i%10)*100);
   		  swap/=100;
   		  sum = sum + (swap%10);
	    }
	    if(check==2)
      {
  		  i/=10;
  		  sum=sum+(i%10)*10;
	    }
	    else if(check==3)
      {
  		  i/=10;
  		  sum=sum+sum2;
	    }
	 check++;
	}

printf("| %d - %d | = %d\n",temp,sum,abs(temp-sum));
total = total + abs(temp-sum);
temp++;
n++;
check=0; sum=0; sum2=0;
  }
  printf("sumation : %d",total);
}
else
{
  printf("Out of range : %d",i);
}

return 0;
}
