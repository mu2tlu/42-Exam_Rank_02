#include <unistd.h>

int	main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	if(ac == 2)
	{
		while(av[1][i])
		{
			if((av[1][i] == 32 || (av[1][i] >= 9 && av[1][i] <= 13)) && (av[1][i + 1] > 32 && av[1][i + 1] < 127) && av[1][i])
				j = i + 1;
				i++;
		}
		while((av[1][j] > 32 && av[1][j] < 127) &&av[1][i])
		{
			write(1, &av[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
}
