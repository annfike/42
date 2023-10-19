/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelaloy <adelaloy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:33:53 by adelaloy          #+#    #+#             */
/*   Updated: 2023/10/11 15:40:25 by adelaloy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The isalnum() function tests for any character for which
isalpha(3) or isdigit(3) is true.  The value of the argument
must be representable as an unsigned char or the value of EOF.*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A'
			&& c <= 'Z'))
		return (1);
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
  char c = '8';

  int output = ft_isalnum(c);
  printf("output = %d", output);
  return (0);
}*/