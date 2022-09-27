#include <stdio.h>

int	ft_abs(int nb)
{
	if (nb >= 0)
		return (nb);
	else
		return (-1 * nb);
}

int	rev_nbr(int nb)
{
	int	rev;
	int remain;

	rev = 0;
	while (nb != 0)
	{
		remain = nb % 10;
		rev = rev * 10 + remain;
		nb /= 10;
	}
	return (rev);
}

int	get_delta(int nb,int rev)
{
	return (ft_abs(nb - rev));
}

void	loop_five(int	nb)
{
	int i;
	int	rev;
	int	delta;
	int sum;

	i = 5;
	sum = 0;
	while (i)
	{
		rev = rev_nbr(nb);
		delta = get_delta(nb,rev);
		sum += delta;
		printf("| %d - %d | = %d\n", nb, rev, delta);
		if (i == 1)
			printf("sumination : %d\n",sum);
		i--;
		nb++;
	}

}



int	main()
{
	int	i;
	 printf("Enter a number (100 - 995) : ");
	 scanf("%d",&i);
	if (i < 100 || i > 995)
	{
		printf("Out of range : %d\n",i);
		return (0);
	}
	
	loop_five(i);
}