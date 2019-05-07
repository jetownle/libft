/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetownle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 18:05:01 by jetownle          #+#    #+#             */
/*   Updated: 2019/05/01 14:04:25 by jetownle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* copies s2 into s1 including terminating '\0' and returns s1 */

#include <libft.h>

char 	*ft_strcpy(char *dest, const char *src)
{
		unsigned int i;

		i = 0;
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = src[i];
		return (dest);
}

