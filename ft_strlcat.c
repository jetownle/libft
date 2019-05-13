/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetownle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 22:27:30 by jetownle          #+#    #+#             */
/*   Updated: 2019/05/12 22:44:21 by jetownle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && (i + j) < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if ((i + j) < dstsize)
	{
		dst[i + j] = '\0';
	}
	k = 0;
	while (src[k] != '\0')
	{
		k++;
	}
	return (i + k);
}
