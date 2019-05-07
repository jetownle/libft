/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetownle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 20:21:52 by jetownle          #+#    #+#             */
/*   Updated: 2019/05/04 20:54:17 by jetownle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* append n characters of s2 to s1 and terminate with '\0', return s1 */

#include <libft.h>

char 	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t i;
	size_t j;

	j = 0;
	i = 0;

	while(s1[i] != '\0')
	{
		i++;
	}

	while(s2[j] != '\0' && j < n)
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

