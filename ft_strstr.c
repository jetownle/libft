/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetownle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 21:14:42 by jetownle          #+#    #+#             */
/*   Updated: 2019/05/06 02:18:32 by jetownle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* strstr fnct finds the first occurrence of the substring needle in the string haystack. the terminating null bytes ('\0') are not compared. these functions retrn a pointer to the beginning of the located substring or NULL if the substring is not found */

/* #include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h> */

#include <libft.h>

char  		*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	if (needle[0] == '\0')
	{
		return ((char*)haystack);
	}
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
			{
				return ((char*)haystack + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

/* 
int main()
{
  const char haystack[20] = "youfoundme";
  const char needle[10] = "fou";
  char *ret;

  ret = ft_strstr(haystack, needle);

  printf("The substring is: %s\n", ret);

  return 0;
} 
*/

