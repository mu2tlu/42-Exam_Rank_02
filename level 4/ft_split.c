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
        if(str[i] > 32)
        {
            split[a] = (char *)malloc(sizeof(char) * len);
            
            b = 0;    
            
            while (str[i] > 32)
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
    if (a == 0) // Sadece boşluk karakterleri varsa
    {
        free(split);
        return 0;
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