void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i = 0, j = 0;
	int	temp;

	while (i < size)
	{
		j = i;
		while (j < size)
		{
			if (tab[i] > tab[j])
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


/* void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	int tmp;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
} */
