/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelaloy <adelaloy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:58:21 by adelaloy          #+#    #+#             */
/*   Updated: 2023/10/11 16:41:03 by adelaloy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a new string,
which is the result of the concatenation of ’s1’ and ’s2’.*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		i;
	int		j;
	int		len_s1;
	int		len_s2;

	i = -1;
	j = 0;
	if (!s1 || !s2)
		return (0);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	dst = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!dst)
		return (NULL);
	while (++i < len_s1)
		dst[i] = s1[i];
	while (j < len_s2)
	{
		dst[i] = s2[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}

/*#include <stdio.h>
int	main(void)
{
  char const str[4] = "foo";
  char const str1[4] = "bar";
  char *output = ft_strjoin(str, str1);
  printf("%s\n", output);
  free(output);
  return(0);
}*/