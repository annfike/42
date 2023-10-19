/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelaloy <adelaloy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:55:17 by adelaloy          #+#    #+#             */
/*   Updated: 2023/10/11 15:24:37 by adelaloy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The calloc() function contiguously allocates enough space
for count objects that are size bytes of memory each and
returns a pointer to the allocated memory.  The allo-
		cated memory is filled with bytes of value zero.*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	while (i < count * size)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}
