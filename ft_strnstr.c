/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetownle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 01:21:38 by jetownle          #+#    #+#             */
/*   Updated: 2019/05/06 02:23:20 by jetownle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
#include <unistd.h>
#include <stdio.h>
*/

#include <libft.h>

char 		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if(needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	while(haystack[i] != '\0' && i < len)
	{
		while(haystack[i + j] == needle[j])
		{
			if(needle[j + 1] == '\0')
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
  size_t len = 3;

  ret = ft_strnstr(haystack, needle, len);

  printf("The substring is: %s\n", ret);

  return 0;
}
*/