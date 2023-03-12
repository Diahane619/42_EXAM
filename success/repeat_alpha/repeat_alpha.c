#include <unistd.h>

int main(int ac, char **av)
{
	int	i;
	int	k;
	
	i = 0;
	if(ac == 2)
	{
		while(av[1][i])
		{
			k = 1;
			if (av[1][i] >= 65 && av[1][i] <= 90)
				k = av[1][i] - 64;
			if (av[1][i] >= 97 && av[1][i] <= 122)
				k = av[1][i] - 96;
			while (k >= 1)
			{
				write(1, &av[1][i], 1);
				k--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}