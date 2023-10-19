/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelaloy <adelaloy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:59:18 by adelaloy          #+#    #+#             */
/*   Updated: 2023/10/11 15:42:28 by adelaloy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.*/

#include "libft.h"

char	*ft_itoa(int n)
{
	unsigned int	nb;
	int				len;
	char			*dst;

	nb = -n * (n < 0) + n * (n > 0);
	len = 0 + 1 * (n <= 0);
	while (nb)
	{
		nb /= 10;
		len++;
	}
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	dst[0] = '-';
	dst[len] = '\0';
	nb = -n * (n < 0) + n * (n > 0);
	while (nb)
	{
		dst[len - 1] = nb % 10 + '0';
		nb /= 10;
		len--;
	}
	dst[0] = '0' * (n == 0) + dst[0] * (n != 0);
	return (dst);
}

/*#include <stdio.h>
int	main(void)
{
	int i  =  -1234;
	char *output = ft_itoa(i);
	printf("%s\n", output);
	free(output);
	return(0);
}*/