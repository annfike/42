/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelaloy <adelaloy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:55:35 by adelaloy          #+#    #+#             */
/*   Updated: 2023/10/11 16:40:22 by adelaloy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strdup() function allocates sufficient memory for a copy of the string s1,
	does
		the copy, and returns a pointer to it.*/

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *src)
{
	char	*dst;

	dst = malloc(ft_strlen(src) + 1);
	if (!dst)
		return ((void *)0);
	ft_strcpy(dst, src);
	return (dst);
}

/*#include <stdio.h>
int	main(void)
{
  char src[] = "Hello";
  printf("%s\n", src);

  char *output = ft_strdup(src);
  printf("%s\n", output);
  free(output);
  printf("%s\n", output);
  printf("%s\n", src);
  return(0);

}*/