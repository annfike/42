/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelaloy <adelaloy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:00:03 by adelaloy          #+#    #+#             */
/*   Updated: 2023/10/11 17:12:08 by adelaloy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Applies the function ’f’ on each character of the string passed as argument,
passing its index as first argument.
Each character is passed by address to ’f’ to be modified if necessary.*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (s)
	{
		while (*s)
		{
			f(i, s);
			i++;
			s++;
		}
	}
}

/*
#include <ctype.h>
#include <stdio.h>

static void	uppercase(int i, char *s)
{
	i = 0;
	while(s[i])
	{
		s[i] = toupper(s[i]);
		i++;
	}
}

int	main(void)
{

	char s[10] = "hello";
	ft_striteri(s, &uppercase);
	printf("%s\n", s);
}*/