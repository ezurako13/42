#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);

int main(void)
{
	char source[3]= "oc";
	char destination[31];
	
	char source1[15]= "123";
	char destination1[5] = "abcd";
	char source2[15]= "123";
	char destination2[5] = "abcd";
	int n= 5;

	char *retft = ft_strcpy(destination1, source1);
	printf("\n\n\nretft= %d\n\nft_strcpy=>\t%s\n", retft, destination1);
	for(int i=0; i<31; i++) printf("%d ", destination1[i]);

	char *rets = strcpy(destination2, source2);
	printf("\n\n\nrets= %d\n\nstrcpy=>\t%s\n", rets, destination2);
	for(int i=0; i<31; i++) printf("%d ", destination2[i]);

	printf("\n\n\n");
	return (0);
}

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
