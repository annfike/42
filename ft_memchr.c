/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelaloy <adelaloy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:53:15 by adelaloy          #+#    #+#             */
/*   Updated: 2023/10/11 15:47:15 by adelaloy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memchr() function locates the first occurrence of c
(converted to an unsigned char) in string s.

RETURN VALUES
The	memchr(void) function returns a pointer to the byte located,
or NULL if no such byte exists within n bytes.*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ss;

	i = 0;
	ss = (unsigned char *)s;
	while (n--)
	{
		if (ss[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

/*#include <string.h>
#include <stdio.h>

int main (void)
{
   // Исходный массив
   unsigned char src[15]="1234567890";
   // Переменная, в которую будет сохранен указатель
   // на искомый символ.
   char *sym;

   // Вывод исходного массива
   printf ("src old: %s\n",src);

   // Поиск требуемого символа
   sym = ft_memchr (src, '4', 10);

   // Если требуемый символ найден, то заменяем его
   // на символ '!'
   if (sym != NULL)
		sym[0]='!';

   // Вывод исходного массива
   printf ("src new: %s\n",src);

   return (0);
}*/