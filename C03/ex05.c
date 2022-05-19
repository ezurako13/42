#include <unistd.h>
#include <stdio.h>
#include <string.h>

/////////////////////////////////////////////////////////////////////////

/*	$OpenBSD: strlcat.c,v 1.2 1999/06/17 16:28:58 millert Exp $	*/

/*-
 * Copyright (c) 1998 Todd C. Miller <Todd.Miller@courtesan.com>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL
 * THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

//#if defined(LIBC_SCCS) && !defined(lint)
//static char *rcsid = "$OpenBSD: strlcat.c,v 1.2 1999/06/17 16:28:58 millert Exp $";
//#endif /* LIBC_SCCS and not lint */
//#include <sys/cdefs.h>
//__FBSDID("$FreeBSD$");
//
//#include <sys/types.h>
//#include <sys/libkern.h>

/*
 * Appends src to string dst of size siz (unlike strncat, siz is the
 * full size of dst, not space left).  At most siz-1 characters
 * will be copied.  Always NUL terminates (unless siz <= strlen(dst)).
 * Returns strlen(src) + MIN(siz, strlen(initial dst)).
 * If retval >= siz, truncation occurred.
 */
size_t
freebsd_strlcat(dst, src, siz)
	char *dst;
	const char *src;
	size_t siz;
{
	char *d = dst;
	const char *s = src;
	size_t n = siz;
	size_t dlen;

	/* Find the end of dst and adjust bytes left but don't go past end */
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = siz - dlen;

	if (n == 0)
		return(dlen + strlen(s));
	while (*s != '\0') {
		if (n != 1) {
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';

	return(dlen + (s - src));	/* count does not include NUL */
}

//////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////

size_t apple_strlcat(dst, src, siz)
	char *dst;
	const char *src;
	size_t siz;
{
	register char *d = dst;
	register const char *s = src;
	register size_t n = siz;
	size_t dlen;

	/* Find the end of dst and adjust bytes left but don't go past end */
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = siz - dlen;

	if (n == 0)
		return(dlen + strlen(s));
	while (*s != '\0') {
		if (n != 1) {
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';

	return(dlen + (s - src));	/* count does not include NUL */
}

//////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////

size_t
google_strlcat(char *dst, const char *src, size_t siz)
{
	char *d = dst;
	const char *s = src;
	size_t n = siz;
	size_t dlen;
	/* Find the end of dst and adjust bytes left but don't go past end */
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = siz - dlen;
	if (n == 0)
		return(dlen + strlen(s));
	while (*s != '\0') {
		if (n != 1) {
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return(dlen + (s - src));	/* count does not include NUL */
}

//////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////

unsigned int	hamza_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}

unsigned int	hamza_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	d;

	if (size <= hamza_strlen(dest))
		return (size + hamza_strlen(src));
	c = hamza_strlen(dest);
	d = 0;
	while (src[d] != '\0' && c + 1 < size)
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = '\0';
	return (hamza_strlen(dest) + hamza_strlen(&src[d]));
}

//////////////////////////////////////////////////////////////////////

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{	
	char s1[15]= "123";
	char s2[5] = "abcd";
	char s3[15]= "123";
	char s4[5] = "abcd";
	int n= 5;

	int retft = google_strlcat(s1, s2, n);
	printf("\n\nretft= %d\n\nft_strlcat=>\t%s\n", retft, s1);
	for(int i=0; i<31; i++) printf("%d ", s1[i]);

	int rets = hamza_strlcat(s3, s4, n);
	printf("\n\nrets= %d\n\nstrlcat=>\t%s\n", rets, s3);
	for(int i=0; i<31; i++) printf("%d ", s3[i]);

	return (0);
}


unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int lend;
	int lens;

	lend = -1;
	while(dest[++lend] != '\0');
	lens = -1;
	while(src[++lens] != '\0');

	
	i = -1;

	while (src[++i] != '\0' && i < (int)size - lend - 1)
		dest[lend + i] = src[i];
	if (i < size - 1)
		dest[lend + i + 1] = '\0';
	else
		dest[lend + i] = '\0';
	if (size < lend)
		return (lend + size + 1);
	return (lend + lens);
}
