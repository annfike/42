/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelaloy <adelaloy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:53:59 by adelaloy          #+#    #+#             */
/*   Updated: 2023/10/16 12:43:03 by adelaloy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strnstr() function locates the first occurrence of the null-terminated
string needle=to_find in the string haystack=str,
where not more than len characters are searched.
Characters that appear after a `\0' character are not searched.
Since the strnstr() function is a FreeBSD specific API,
it should only be used when portability is not a concern.*/

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		while (to_find[j] && (str[i + j] == to_find[j]) && (i + j < len))
			j++;
		if (to_find[j] == '\0')
			return ((char *)str + i);
		i++;
	}
	return (0);
}

/*char *ft_strstr(char *str, char *to_find)
{
	int	i;
  int j;

  i = 0;
  if (to_find[0] == '\0')
	return (str);
  while (str[i])
	{
		if (str[i] == to_find[0])
		{
		j = 1;
		while (to_find[j] && (str[i+j] == to_find[j]))
			j++;
		if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
	}
  return (0);
}

#include <stdio.h>

int	main(void)
{
  char s1[] = "Helobro";
  char s2[] = "el";

  char *output1 = ft_strstr(s1, s2);
  printf("output = %s\n", output1);
  char *output2 = ft_strnstr(s1, s2, 0);
  printf("output = %s\n", output2);
  return (0);
 }*/