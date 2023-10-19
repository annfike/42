/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelaloy <adelaloy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:50:04 by adelaloy          #+#    #+#             */
/*   Updated: 2023/10/11 15:50:27 by adelaloy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The memcpy() function copies n bytes from memory area src to memory area dst.
If dst	and src overlap, behavior is undefined.
Applications in which dst and src might overlap should use memmove(3) instead.

RETURN VALUES
		The memcpy() function returns the original value of dst.
!! void *     memcpy(void *restrict dst, const void *restrict src, size_t n);*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst_temp;
	const char	*src_temp;

	if (!dst && !src)
		return (0);
	dst_temp = (char *)dst;
	src_temp = (const char *)src;
	while (n)
	{
		*(dst_temp++) = *(src_temp++);
		--n;
	}
	return (dst);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char src[20] = "How Are you ?";
	char dst[20] = {0};
	//memcpy(dst,src,sizeof(src));
	ft_memcpy(dst,src,sizeof(src));
	printf("dst = %s\n", dst);

	int i = 0;
	int src1[5] = {1,2,3,4,5};
	int dst1[5] = {0};
	//memcpy(dst1,src1,sizeof(src1));
	ft_memcpy(dst1,src1,sizeof(src1));
	for(i=0; i<5; i++)
		printf("%d ", dst1[i]);

	struct
	{
		char	name[40];
		int		age;
	} person1, person2;

	char myname[] = "Amlendra";
	//memcpy ( person1.name, myname, strlen(myname)+1 );
	ft_memcpy ( person1.name, myname, strlen(myname)+1 );
	person1.age = 30;
	//Now copy person1 information to person2
	//memcpy ( &person2, &person1, sizeof(person1) );
	ft_memcpy ( &person2, &person1, sizeof(person1) );
	printf ("person2: %s, %d \n", person2.name, person2.age );
	return (0);
}*/