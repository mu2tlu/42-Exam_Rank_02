#include <stdlib.h>

char    **ft_split(char *str)
{
    int i = 0, a = 0, b = 0, len = 0;

    while (str[++len]);

    char **split = (char **)malloc(sizeof(char *) * len);

    if(!split)
        return 0;

    while (str[i])
    {
        if(str[i] > 32 && str[i])
        {
            split[a] = (char *)malloc(sizeof(char) * len);
            
            b = 0;    
            
            while (str[i] > 32 && str[i])
            {
                split[a][b] = str[i];
                b++;
                i++;
            }
            split[a][b] = '\0';
            a++;
        }
        else
            i++;
    }
    split[a] = 0;
    return split;
}


#include <stdio.h>
int main()
{
    char *str = "muhammet mutlu";
    char **av = ft_split(str);
    int i = 0;
    for(i; av[i] != 0;)
    {
        printf("%s\n", av[i]);
        i++;
    }
}
