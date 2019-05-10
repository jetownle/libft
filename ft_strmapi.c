/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetownle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 18:43:45 by jetownle          #+#    #+#             */
/*   Updated: 2019/05/09 19:28:28 by jetownle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char 	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t i;
	char *fresh;

	i = 0;

	if (!s || !f)
		return (NULL);
	fresh = ft_strnew(ft_strlen(s));
	while (s[i] != '\0')
	{
		fresh[i] = (*f)(i, s[i]);
		i++;
	}
	return (fresh);
}

