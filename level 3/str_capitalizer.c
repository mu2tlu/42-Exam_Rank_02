#include <unistd.h>

void	str_capitalizer(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i - 1] == 32 || str[i - 1] == 0) && str[i] >= 'a' && str[i] <= 'z' )
			str[i] -= 32;
		write(1, &str[i], 1);
		i++;
	}

}

int	main(int ac, char **av)
{
	int i = 1;
	while (i < ac)
	{
		str_capitalizer(av[i]);
		write(1, "\n", 1);
		i++;
	}
	if (ac == 1)
		write(1, "\n", 1);
}
