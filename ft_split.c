/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelaloy <adelaloy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:59:03 by adelaloy          #+#    #+#             */
/*   Updated: 2023/10/16 15:39:15 by adelaloy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates with malloc and returns an array of strings obtained by splitting s
using the character c as a delimiter. The array must end with a NULL pointer.*/

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	n;
	int	i;

	n = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			n += 1;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (n);
}

static char	**make_arr_words(char **dst, char const *s, int n, char c)
{
	int	i;
	int	j;
	int	word_len;

	i = 0;
	j = 0;
	word_len = 0;
	while (i < n)
	{
		if (s[j] && s[j] != c)
			word_len++;
		else if (s[j] == c || s[j] == '\0')
		{
			if (word_len > 0)
			{
				dst[i] = (char *)malloc(sizeof(char) * (word_len + 1));
				if (dst[i])
					ft_strlcpy(dst[i], (s + j - word_len), word_len + 1);
				i++;
				word_len = 0;
			}
		}
		j++;
	}
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	int		n;
	char	**dst;

	n = count_words(s, c);
	dst = (char **)malloc(sizeof(char *) * (n + 1));
	if (!dst)
		return (NULL);
	dst = make_arr_words(dst, s, n, c);
	dst[n] = (void *)0;
	return (dst);
}

/*// gcc -Wall -Wextra -Werror ft_split.c ft_calloc.c
ft_strlen.c ft_strlcpy.c
#include <stdio.h>

int	main(void)
{
  //char const str[] = "abNabmeab";
  //int i = count_words(str, 'b');
  //printf("%d", i);
  //char **output;
  //output = ft_split(str, 'b');
  //printf("%d", i);
  // Проверяем есть ли по этому адресу строка.
  //Если есть то спускаемся ниже и печатаем ее символы
  //while (*output != ((void *)0))
//	{
  //      printf("%s", *output);
	//	output++;
	//}
  char **s = ft_split("", 'z');
  while (*s != ((void *)0))
	{
		printf("%s", *s);
		s++;
	}
	printf("\n");
	char ** tabstr;
	if (!(tabstr = ft_split("", 'z')))
		printf("no");
	else
		if (!tabstr[0])
			printf("ok\n");
		else
			printf("ko\n");

  //printf("%s\n", output);
  //free(output);
  return(0);
}*/