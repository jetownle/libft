/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetownle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 12:17:04 by jetownle          #+#    #+#             */
/*   Updated: 2019/05/01 13:54:58 by jetownle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* allocates with malloc and returns a fresh memory area. the memory allocated is initialized to 0, if the allocation fails, the function returns null */

#include <libft.h>

void 	*ft_memalloc(size_t size)
{
	char *ptr;

	ptr = NULL;
	if (size)
	{
		ptr = (char *)malloc(sizeof(char) * size);
		if (!ptr)
			return (NULL);
		else
			ft_bzero(ptr, size);
	}
	return ((void *)ptr);
}

