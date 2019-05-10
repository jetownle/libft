/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetownle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 15:12:02 by jetownle          #+#    #+#             */
/*   Updated: 2019/05/08 16:31:30 by jetownle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>
*/

#include <libft.h>

/*
int 	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}
*/

char 	*ft_strrchr(const char *s, int c)
{
	char 	*str;
	int i;

	str = (char *)s;

	i = (int)ft_strlen(str) + 1;

	while (i > -1)
	{
		if (str[i] == (char)c)
		{
			return ((char *) s + i);
		}
		i--;
	}
	return (NULL);
}

/*
int	main(void)
{
  int c = 'n';
	printf("%s\n", ft_strrchr("nefarious", c));
	return (0);
}
*/
