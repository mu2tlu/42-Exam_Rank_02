void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i = 0, j = 0;
	unsigned int	temp;

	while (i < size)
	{
		j = i;
		while (j < size)
		{
			if (tab[i] > tab[j] && tab[i] != tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

#include <stdio.h>

int	main(void)
{
	unsigned int i = 0;
	int tab[] = {0, 4, 1, 3, 2};
	sort_int_tab(tab, 5);
	while (i < 5)
	{
		printf("%d", tab[i]);
		i++;
	}
}
