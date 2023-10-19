/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelaloy <adelaloy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:51:29 by adelaloy          #+#    #+#             */
/*   Updated: 2023/10/11 14:22:21 by adelaloy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The tolower() function converts an upper-case letter to the corresponding
lower-case letter.  The argument must be representable as an unsigned char
or the value of EOF.*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
