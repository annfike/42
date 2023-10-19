/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelaloy <adelaloy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:50:26 by adelaloy          #+#    #+#             */
/*   Updated: 2023/10/11 15:52:52 by adelaloy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memmove() function copies n bytes from string src to string dst.  The two
		strings may overlap; the copy is always done in a non-destructive manner.

RETURN VALUES
		The memmove() function returns the original value of dst.*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*src_temp;
	char	*dst_temp;

	src_temp = (char *)src;
	dst_temp = (char *)dst;
	if ((src_temp == NULL) && (dst_temp == NULL))
	{
		return (NULL);
	}
	if (dst_temp > src_temp)
	{
		while (n-- > 0)
			dst_temp[n] = src_temp[n];
	}
	else
	{
		while (n--)
		{
			*(dst_temp++) = *(src_temp++);
		}
	}
	return (dst);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char str[50] = "I am going from Delhi to Gorakhpur";
	printf( "Function:\tmy_memmove with overlap\n" );
	printf( "Orignal :\t%s\n",str);
	printf( "Source:\t\t%s\n", str + 5 );
	printf( "Destination:\t%s\n", str + 11 );
	ft_memmove( str + 11, str + 5, 29 );
	printf( "Result:\t\t%s\n", str );
	return (0);
}*/