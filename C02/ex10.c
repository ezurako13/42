#include <unistd.h>
#include <stdio.h>
#include <string.h>

/////////////////////////////////////////////////////////////////////////////////

#include <sys/types.h>
#include <string.h>

/*
 * Copy string src to buffer dst of size dsize.  At most dsize-1
 * chars will be copied.  Always NUL terminates (unless dsize == 0).
 * Returns strlen(src); if retval >= dsize, truncation occurred.
 */
size_t
openbsd_strlcpy(char *dst, const char *src, size_t dsize)
{
	const char *osrc = src;
	size_t nleft = dsize;

	/* Copy as many bytes as will fit. */
	if (nleft != 0) {
		while (--nleft != 0) {
			if ((*dst++ = *src++) == '\0')
				break;
		}
	}

	/* Not enough room in dst, add NUL and traverse rest of src. */
	if (nleft == 0) {
		if (dsize != 0)
			*dst = '\0';		/* NUL-terminate dst */
		while (*src++)
			;
	}

	return(src - osrc - 1);	/* count does not include NUL */
}

/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////

size_t
apple_strlcpy(char *dst, const char *src, size_t siz)
{
	char *d = dst;
	const char *s = src;
	size_t n = siz;
	/* Copy as many bytes as will fit */
	if (n != 0) {
		while (--n != 0) {
			if ((*d++ = *s++) == '\0')
				break;
		}
  }
	/* Not enough room in dst, add NUL and traverse rest of src */
	if (n == 0) {
		if (siz != 0)
			*d = '\0';		/* NUL-terminate dst */
		while (*s++)
			;
	}
	return(s - src - 1);	/* count does not include NUL */
}

/////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	source[]= "abcd";
	char	destination[10]= "123";
	int	len_dest ;//= 7;
	int	len_src;
	char s1[15]= "123";
	char s2[5] = "abcd";
	char s3[15]= "123";
	char s4[5] = "abcd";
	int n= 5;

	int retft = openbsd_strlcpy(s1, s2, n);
	printf("\n\nreturn_open= %d\n\nopenbsd_strlcpy=>\t%s\n", retft, s1);
	for(int i=0; i<31; i++) printf("%d ", s1[i]);

	int rets = apple_strlcpy(s3, s4, n);
	printf("\n\nreturn_apple= %d\n\naple_strlcpy=>\t%s\n", rets, s3);
	for(int i=0; i<31; i++) printf("%d ", s3[i]);

	len_dest = *(&destination + 1) - destination;
	printf("\nlen_dest= %d\n", len_dest);
	
	len_src = ft_strlcpy(destination, source, len_dest);

	printf("\n\ngalp= %c %c\n", 3, -13);
	printf("\nreturn_ft= %d\n", len_src);
	printf("\nchar by char= ");
	for(int a=0; a<10; a++) printf("%c", destination[a]);
	printf("\n\nmem= ");
	for(int a=0; a<10; a++) printf("%d ", destination[a]);
	printf("\n\nprint with printf= %s\n", destination);
	
	return (0);
}


unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
    unsigned int len_src;

    len_src = 0;
    while (src[len_src] != '\0')
        len_src++;
	i = 0;
	while ((i < len_src) && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
    dest[i] = '\0';
	return (len_src);
}
