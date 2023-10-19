/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelaloy <adelaloy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:50:57 by adelaloy          #+#    #+#             */
/*   Updated: 2023/10/11 16:41:58 by adelaloy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strlcpy() and strlcat() functions copy and concatenate strings with the
same input	parameters and output result as	snprintf(3).
They are designed to be safer, more consistent,	and less error prone
replacements for the easily misused functions	strncpy(3) and strncat(3).

strlcpy() and strlcat() take the full size of the destination buffer and
guarantee NUL-termination if there is room.  Note that room for the NUL
should be included in	dstsize.

strlcpy() copies up to dstsize	- 1 characters from the string src to dst,
NUL-terminating the result if dstsize is not 0.

strlcat() appends string src to the end of dst.
It will append at most dstsize	- strlen(dst) - 1 characters.
It will then NUL-terminate,	unless dstsize is 0 or the	original dst string
was longer than dstsize (in practice this should not happen as it
means that either dstsize is incorrect or that dst is not a proper string).

If the src and dst strings overlap, the behavior is undefined.

RETURN VALUES
the	strlcpy(void) and strlcat() functions return the total length of the
string they tried to create.  For strlcpy() that means the length of src.
For	strlcat(void) that means the initial length of dst plus the length of src.
!!  size_t     strlcat(char * restrict dst, const char * restrict src,
	size_t dstsize);*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	size_scr;
	size_t	size_dst;

	size_scr = ft_strlen(src);
	if (size == 0)
		return (size_scr + size);
	size_dst = ft_strlen(dst);
	i = 0;
	j = size_dst;
	if (size <= size_dst)
		return (size_scr + size);
	while (src[i] != 0 && j < size - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (size_scr + size_dst);
}

/*#include <stdio.h>
int	main(void)
{
  char source[6] = "aaa";
  char destination[15] = "HelloHello";

  size_t output = ft_strlcat (destination, source, 3);
  printf("src = %s, dest = %s, output = %zu", source, destination, output);
  return (0);

}*/