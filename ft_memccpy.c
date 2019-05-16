/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetownle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 23:44:54 by jetownle          #+#    #+#             */
/*   Updated: 2019/05/15 17:10:47 by jetownle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*d;
	char	*s;

	d = dest;
	s = (char *)src;
	while (n > 0)
	{
		*d++ = *s;
		if (*s == c)
			return ((void*)d);
		s++;
		n--;
	}
	return (NULL);
}
