/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelaloy <adelaloy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:59:50 by adelaloy          #+#    #+#             */
/*   Updated: 2023/10/11 16:43:05 by adelaloy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Applies the function ’f’ to each character of the string ’s’,	and passing its
index as first argument to create a new string (with malloc(3))
resulting from successive applications of ’f’.*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dst;
	int		i;
	int		len;

	i = 0;
	if (!s)
		return (0);
	len = ft_strlen(s);
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
	{
		return (0);
	}
	while (s[i])
	{
		dst[i] = f(i, s[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*char ft_toupper1(unsigned int i, char c)
{
	i = 0;
	if (c >= 'a' && c <= 'z') // check if it's a lowercase character
		c = c - 32; // convert to uppercase using ASCII code
	return (c);
}

#include <stdio.h>

int	main(void)
{
  char s[6] = "aaa";
  //char destination[11] = "HelloHello";

  char* output = ft_strmapi(s, &ft_toupper1);
  printf("output = %s", output);
  return (0);

}*/