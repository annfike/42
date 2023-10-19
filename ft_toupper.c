/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelaloy <adelaloy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:51:14 by adelaloy          #+#    #+#             */
/*   Updated: 2023/10/11 14:18:40 by adelaloy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The toupper() function converts a lower-case letter to the corresponding
upper-case letter. The argument must be representable as an unsigned char
or the value of EOF.*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
