/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelaloy <adelaloy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:54:14 by adelaloy          #+#    #+#             */
/*   Updated: 2023/10/16 10:08:39 by adelaloy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The atoi() function converts the initial portion of the
string pointed to by str to int representation.*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	minus;
	int	n;

	i = 0;
	minus = 1;
	n = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '-')
		minus = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n * minus);
}

/*
#include <stdio.h>

int	main(void)
{
  printf("%d\n", ft_atoi("-1234ab567"));
  printf("%d\n", atoi("-1234ab567"));
  printf("%d\n", ft_atoi("\t+234567"));
  printf("%d\n", atoi("\t+234567"));
  printf("%d\n", ft_atoi("asd*---+---+"));
  printf("%d\n", atoi("asd*---+---+"));
  printf("%d\n", ft_atoi("---+---+234\n567"));
  printf("%d\n", atoi("---+---+234\n567"));
  printf("%d\n", ft_atoi("-----0"));
  printf("%d\n", atoi("-----0"));
  printf("%d\n", ft_atoi("963+748"));
  printf("%d\n", atoi("963+748"));

  return (0);
 }*/