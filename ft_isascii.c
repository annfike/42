/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelaloy <adelaloy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:46:46 by adelaloy          #+#    #+#             */
/*   Updated: 2023/10/11 10:50:48 by adelaloy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The isascii() function tests for an ASCII character*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
