/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelaloy <adelaloy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:48:54 by adelaloy          #+#    #+#             */
/*   Updated: 2023/10/11 10:52:46 by adelaloy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The isprint() function tests for any printing character,
including space (` ').  The value of the argument must be
representable as an unsigned char or the value of EOF.*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
