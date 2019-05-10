/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetownle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 11:44:49 by jetownle          #+#    #+#             */
/*   Updated: 2019/05/08 14:20:35 by jetownle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
/* #include <stdio.h> */
/* #include <string.h> */

int 	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int 	i;

	i = 0;
	while (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i] && (i < n))
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	else
	{
		return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
	}
}

/*
int main()
{
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "\xff\xaa\xde\x12", 10);
   memcpy(str2, "\xff\xaa\xde\x12MACOSAAAAA", 10);

   ret = ft_memcmp(str1, str2, 10);

   if(ret > 0)
   {
      printf("str2 is less than str1");
   }
   else if(ret < 0)
   {
      printf("str1 is less than str2");
   }
   else
   {
      printf("str1 is equal to str2");
   }

   return(0);
}
*/
