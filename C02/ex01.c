#include <unistd.h>
#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char source[3]= "oc";
	char destination[31];
	
	char source1[15]= "123";
	char destination1[5] = "abcd";
	char source2[15]= "123";
	char destination2[5] = "abcd";
	int n= 10;

	char *retft = ft_strncpy(destination1, source1, n);
	printf("\n\n\nretft= %d\n\nft_strncpy=>\t%s\n", retft, destination1);
	for(int i=0; i<31; i++) printf("%d ", destination1[i]);

	char *rets = strncpy(destination2, source2, n);
	printf("\n\n\nrets= %d\n\nstrncpy=>\t%s\n", rets, destination2);
	for(int i=0; i<31; i++) printf("%d ", destination2[i]);

	printf("\n\n\n");
	return (0);
}


char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
