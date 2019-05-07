/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetownle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 20:45:52 by jetownle          #+#    #+#             */
/*   Updated: 2019/05/01 13:56:40 by jetownle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* copies n bytes from source to destination and returns destination */

#include <libft.h>

void 	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *d;
	const char *s;

	d = dst;
	s = src;
	while(n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dst);
}

