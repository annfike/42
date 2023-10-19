/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelaloy <adelaloy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:05:44 by adelaloy          #+#    #+#             */
/*   Updated: 2023/10/11 11:23:41 by adelaloy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Outputs the character ’c’ to the given file descriptor.*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
