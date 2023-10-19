/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelaloy <adelaloy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:51:59 by adelaloy          #+#    #+#             */
/*   Updated: 2023/10/16 16:54:29 by adelaloy         ###   ########.fr       */
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

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int main ()
{
   char str[11] = "0163456769"; // Массив со строкой для поиска
   int ch = '6'; // Код искомого символа
   char *ach; // Указатель на искомую переменную в строке,
   по которой осуществляется поиск.
   //ach=strrchr(str,ch); // Ищем символ ‘6’
   //ach=strchr(str, ch); // Ищем символ ‘6’
   //printf("%d\n",ach-str);
   //ach=ft_strchr(str, ch); // Ищем символ ‘6’
   //printf("%d\n",ach-str);
   //ach=ft_strchr1(str, ch); // Ищем символ ‘6’
   //printf("%d\n",ach-str);

   ach=strrchr(str, ch); // Ищем символ ‘6’
   printf("%ld\n",ach-str);
   ach=ft_strrchr(str, ch); // Ищем символ ‘6’
   printf("%ld\n",ach-str);


   return (0);
}*/