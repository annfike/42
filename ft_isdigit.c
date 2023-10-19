/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelaloy <adelaloy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:23:21 by adelaloy          #+#    #+#             */
/*   Updated: 2023/10/11 10:51:37 by adelaloy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The isdigit() function tests for a decimal digit character. */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
