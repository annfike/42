/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelaloy <adelaloy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:20:22 by adelaloy          #+#    #+#             */
/*   Updated: 2023/10/11 15:40:43 by adelaloy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*isalpha -- alphabetic character test*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
  char c = 'f';

  int output = ft_isalpha(c);
  printf("output = %d", output);
  return (0);
}*/