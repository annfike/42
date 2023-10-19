/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelaloy <adelaloy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:58:50 by adelaloy          #+#    #+#             */
/*   Updated: 2023/10/16 17:53:36 by adelaloy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters
specified in ’set’ removed from the beginning and the end of the string.*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		end;
	char	*dst;

	if (!s1 || !set)
		return (0);
	while (ft_strchr(set, *s1) && *s1)
		++s1;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[end]) && end > 0)
		end--;
	dst = ft_substr(s1, 0, end + 1);
	return (dst);
}

/*gcc -Wall -Wextra -Werror ft_strtrim.c ft_calloc.c ft_strlen.c
#include <stdio.h>

int	main(void)
{
  char const str[] = "abbNameab";
  char *output = ft_strtrim(str, "ab");
  printf("%s\n", output);
  free(output);
  return(0);
}*/