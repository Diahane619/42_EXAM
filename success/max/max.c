int	max(int *tab, unsigned int len)
{
	unsigned int i;
	int res;

	res = tab[0];
	i = 0;
	if (len == 0)
		return(0);
	while (i < len)
	{
		if(res < tab[i])
			res = tab[i];
		i++;
	}
	return (res);
}