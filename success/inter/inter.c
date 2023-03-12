#include <unistd.h>

int main(int ac, char **av)
{
	int	i;
	int k;
	int l;
	char	*s1;
	char	*s2;

	i = 0;
	if(ac == 3)
	{
		while (av[1][i])
		{
			k = 0;
			while(av[2][k])
			{
				if (av[1][i] == av[2][k])
				{
					l = 0;
					while(av[1][l] != av[1][i])
						l++;
					if (l == i)
					{
						l = 0;
						while (av[2][l] != av[2][k])
							l++;
						if (l == k)
							write(1, &av[1][i], 1);
					}
				}
				k++;
			}
			i++;
		}
	}
	write (1, "\n", 1); 
}