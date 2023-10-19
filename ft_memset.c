/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelaloy <adelaloy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:49:32 by adelaloy          #+#    #+#             */
/*   Updated: 2023/10/11 15:54:52 by adelaloy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memset() function writes n bytes of value c
(converted to an unsigned char) to the string s.*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[50] = "Aticleworld is a programming Blog.";
	printf("\nBefore memset(): %s\n\n", str);
	// Fill 6 characters starting from str[11] with '*'
	memset(str + 11, '*', 6);
	printf("After memset(): %s\n\n", str);
	ft_memset(str + 11, '-', 6);
	printf("After ft_memset(): %s\n\n", str);
	return (0);
}*/