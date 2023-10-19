/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelaloy <adelaloy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:49:47 by adelaloy          #+#    #+#             */
/*   Updated: 2023/10/16 10:09:04 by adelaloy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The bzero() function writes n zeroed bytes to the string s.
If n is zero, bzero() does nothing.*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

/*
#include <stdio.h>
#include <string.h>
#include <strings.h>

int	main(void)
{
	char str[50] = "Aticleworld is a programming Blog.";
	printf("\nBefore memset(): %s\n\n", str);
	bzero(str + 11, 6);
	printf("After memset(): %s\n\n", str);
	//ft_bzero(str + 11, 6);
	//printf("After ft_memset(): %s\n\n", str);
	return (0);
}*/