#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	putstr(char *string);
int		ft_strlen(char *str);
int		kelimesay(char *string);
void	basharfleribul(char *buffer, char **kelimeler);

int	main(int argsayisi, char **stringler)
{
	int i;
	char *buffer;
	char **kelimeler;
	int kelimesayisi;

	
	buffer = (char *)malloc(strlen(stringler[1]) + 1);
	
	i = -1;
	while (stringler[1][++i] != '\0')
		buffer[i] = stringler[1][i];
	buffer[i] = '\0';

	kelimesayisi = kelimesay(buffer);
	kelimeler = (char **)malloc(kelimesayisi * 8);

	printf("\nstring= %s\n", buffer);
	printf("\nkelimesayisi= %d\n\n", kelimesay(buffer));

	basharfleribul(buffer, kelimeler);

	i = -1;
	while(++i < kelimesayisi)
		printf("kelime[%d]= %s\n", i, kelimeler[i]);
	return (0);
}

int	kelimesay(char *s)
{
	int i;
	int	kelimesayisi;
	char pr;

	kelimesayisi = 0;
	pr = '\0';
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\v')
		{
			pr = s[i];
			i++;
		}
		if (pr == ' ' || pr == '\t' || pr == '\n' || pr == '\v' || pr == '\0')
		{
			if(s[i] != '\0')
				kelimesayisi++;
		}
		pr = s[i];
		if(s[i] != '\0')
			i++;
	}
	return (kelimesayisi);
}

void	basharfleribul(char *s, char **kelimeler)
{
	int i;
	char p;

	p = '\0';
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\v')
		{
			if (p == ' ' || p == '\t' || p == '\n' || p == '\v' || p == '\0')
				s[i]= '\0';
			p = s[i];
			i++;
		}
		if (p == ' ' || p == '\t' || p == '\n' || p == '\v' || p == '\0')
		{
			if(s[i] != '\0')
				*kelimeler = s+i;
			if(s[i] != '\0')
				kelimeler++;
		}
		p = s[i];
		if(s[i] != '\0')
			i++;
	}
}

void	putstr(char *string)
{
	int	i;
	
	i = -1;
	while (string[++i] != '\0')
		write(1, &string[i], 1);
}

int ft_strlen(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0');
	return (i);
}
