unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int n;	

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		n = a;
	else
		n = b;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		++n;
	}
}

#include <stdio.h>

int main(void)
{
    printf("%u\n", lcm(6, 7));
    return 0;
}

/* unsigned int hcf(unsigned int a, unsigned int b)
{
    unsigned int hcf = 1;
    unsigned int smallNum = a < b ? a : b;
    unsigned int i = 1;
    while (i <= smallNum)
    {
        if (a % i == 0 && b % i == 0)
            hcf = i;
        i++;
    }
    return hcf;
}

unsigned int lcm(unsigned int a, unsigned int b)
{
    if (a == 0 || b == 0)
        return 0;
    
    unsigned int lcm = (a * b) / hcf(a, b);
    return lcm;
} */