/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelaloy <adelaloy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:58:05 by adelaloy          #+#    #+#             */
/*   Updated: 2023/10/16 17:22:21 by adelaloy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	size_t	i;
	size_t	ss_len;

	i = 0;
	if (!s)
		return (NULL);
	ss_len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	if (len > ss_len)
		len = ss_len;
	ss = (char *)malloc(len + 1);
	if (!ss)
		return (NULL);
	while (i < len)
	{
		ss[i] = s[start];
		i++;
		start++;
	}
	ss[i] = '\0';
	return (ss);
}

/*gcc -Wall -Wextra -Werror ft_substr.c ft_calloc.c ft_strlen.c
#include <stdio.h>

int	main(void)
{
  char src[] = "Hello";
  printf("%s\n", src);

  char *output = ft_substr(src, 1, 2);
  printf("%s\n", output);
  free(output);
  printf("%s\n", output);
  printf("%s\n", src);
  return(0);
}*/