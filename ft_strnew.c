/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetownle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 12:30:05 by jetownle          #+#    #+#             */
/*   Updated: 2019/05/01 14:17:36 by jetownle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* allocates with malloc and returns a fresh string ending with '\0'. each character of the string is initialized at '\0', if the allocation fails the function returns NULL */

#include <libft.h>

char 	*ft_strnew(size_t size)
{
	char 	*str;

	str = (char*)malloc((size + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_memset(str, '\0' , size + 1);
	return (str);
}

