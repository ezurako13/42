#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main(void)
{	char s1[]= "haber ah tavukla\t";
	char s2[] = "ak";
	int n= -2;

	char *ha= ft_strstr(s1, s2);
	if (ha != 0)
		printf("\n\nft_strstr=>\t%s\n", ha);

	printf("\n\nstrstr=>\t%s\n", strstr(s1, s2));
	return (0);
}


char *ft_strstr(char *str, char *to_find)
{
	int i;
	int o;
	int leno;

	leno = -1;
	while (to_find[++leno] != '\0');
	o = 0;
	i = -1;
	while(str[++i] != '\0')
	{
		while (str[i+o] == to_find[o] && to_find[o] != '\0')
			o++;
		//printf("\n\no= %d leno= %d i= %d harf= %c\n\n", o, leno, i, str[i]);
		if (o == leno)
			return (str+i);
		o = 0;
	}
	return (0);
	
}
