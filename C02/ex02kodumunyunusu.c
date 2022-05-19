#include <unistd.h>

int ft_str_is_alpha(char *str);

int	main(void)
{
	char	source[]= "sdf<g";
	int sonuc= ft_str_is_alpha(source)+48;

	write(1, &sonuc, 1);
	return (0);
}


int ft_str_is_alpha(char *str)
{
    int i;
    int flag;
    int notflag;

    i = 0;
    flag = 0;
    notflag = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            notflag++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            notflag++;
        else if (str[0] == '\0')
            notflag++;
        else
            flag++;
        i++;
    }
    if (flag == 0)
        return (1);
    else
        return (0);
}