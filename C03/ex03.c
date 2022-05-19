#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{	char s1[45]= "haber ah tavukla\t";
	char s2[] = "Tavuklar ah tavuklar";
	char s3[45]= "haber ah tavukla\t";
	char s4[] = "Tavuklar ah tavuklar";
	int n= 35;


	printf("\n\nft_strcat=>\t%s\nreturn->%d\n", s1, ft_strncat(s1, s2, n));

	
	printf("\n\nstrcat=>\t%s\nreturn->%d\n", s1, strncat(s3, s4, n));
	return (0);
}


char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int lend;

	lend = 0;
	while (dest[lend] != '\0')
		lend++;
	
	printf("lend= %d\n", lend);
	i = -1;
	while (src[++i] != '\0' && i < nb)
		dest[lend + i] = src[i];
	dest[lend+i] = '\0';
	return (dest);
}
