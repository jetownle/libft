/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetownle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 18:10:58 by jetownle          #+#    #+#             */
/*   Updated: 2019/05/01 14:09:18 by jetownle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* copies n characters from source into destination, if source < destination, the remainder of destination is filled with '\0' else destination is not terminated, returns destination */

#include <libft.h>

char 	*ft_strncpy(char *dst, const char *src, size_t len)
{
		size_t i;

		i = 0;
		while ( i < len && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		while (i < len)
		{
			dst[i] = '\0';
			i++;
		}
		return (dst);
}

