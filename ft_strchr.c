/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelaloy <adelaloy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:51:43 by adelaloy          #+#    #+#             */
/*   Updated: 2023/10/16 16:56:20 by adelaloy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strchr() function locates the first occurrence of c (converted to a char)
in the string s. The terminating null character is considered to be part of
the string; therefore if c is `\0', the functions locate the terminating `\0'.
The	strrchr(void) is identical to strchr(),
		except it locates the last occurrence of c.

RETURN VALUES
The functions strchr() and strrchr() return a pointer to the located character,
or NULL if the character does not appear in the string.*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}

/*#include <stdio.h>
#include <string.h>

int main ()
{
   char str[11] = "0163456769"; // Массив со строкой для поиска
   int ch = '\0'; // Код искомого символа
   char *ach; // Указатель на искомую переменную в строке,
   //по которой осуществляется поиск.
   //ach=strrchr(str,ch); // Ищем символ ‘6’
   ach=strchr(str, ch); // Ищем символ ‘6’
   printf("%ld\n",ach-str);
   ach=ft_strchr(str, ch); // Ищем символ ‘6’
   printf("%ld\n",ach-str);

   return (0);
}*/