/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelaloy <adelaloy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:49:10 by adelaloy          #+#    #+#             */
/*   Updated: 2023/10/11 16:12:20 by adelaloy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strlen() function computes the length of the string s.
RETURN VALUES
The	strlen(void) function returns the number of characters that precede
the terminating	NUL character.*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*#include <stdio.h>

int	main(void) {
  char buffer[7] = "Hello";

  printf("%zu", ft_strlen(buffer));
}*/