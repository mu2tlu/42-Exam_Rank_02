#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int flag = 0;
    int i = 1;
    int a = atoi(av[1]);
    int b = atoi(av[2]);

    int num = a < b ? a: b;

    if(ac == 3 && a > 0 && b > 0)
    {
        while (i <= num)
        {
            if(a % i == 0 && b % i == 0)
                flag = i;
            i++;
        } 
        if(i - 1 == num)
            printf("%d", flag);
    }
    printf("\n");
}

/* #include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
    int s1 = atoi(av[1]);
    int s2 = atoi(av[2]);
    if(ac == 3)
    {
        if(s1 > 0 && s2 > 0)
        {
            while(s1 != s2)
            {
                if(s1 > s2)
                    s1 -= s2;
                else
                    s2 -= s1;
            }
            printf("%d", s1);
        }
    }
    printf("\n");
} */