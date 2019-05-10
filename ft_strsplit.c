/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetownle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 00:59:20 by jetownle          #+#    #+#             */
/*   Updated: 2019/05/10 01:20:43 by jetownle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char 	**ft_strsplit(char const *s, char c)
{
	size_t i;
	size_t d;
	int start;
	int end;
	char **tab;

	tab = NULL;
	i = 0;
	d = 0;
	if (s && (tab = (char **)malloc(sizeof(*tab) * (ft_strlen(s) / 2 + 2))))
	{
		while (s[i] != '\0')
		{
			while (s[i] && s[i] ==c)
				i++;
			start = i;
			while (s[i] && s[i] != c)
				i++;
			end = i;
			if (end > start)
				tab[d++] = ft_strsub(s, start, (end - start));
		}
	}
	tab[d] = NULL;
	return (tab);
}

