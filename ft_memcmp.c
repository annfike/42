/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelaloy <adelaloy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:53:32 by adelaloy          #+#    #+#             */
/*   Updated: 2023/10/11 15:48:51 by adelaloy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memcmp() function compares byte string s1 against byte string s2.
Both strings are assumed to be n bytes long.

RETURN VALUES
The	memcmp(void) function returns zero if the two strings are identical,
otherwise returns the difference between the first two differing bytes
(treated as unsigned char values, so that `\200' is greater than `\0',
	for example).
Zero-length strings are always identical.  This behavior is not required by C
and portable code should only depend on the sign of the returned value.*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	size_t			i;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
  char s1[] = "sk";
  char s2[] = "s";

  int output = ft_memcmp(s1, s2, 2);
  printf("output = %d\n", output);
  return (0);
 }*/