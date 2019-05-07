/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetownle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 19:16:31 by jetownle          #+#    #+#             */
/*   Updated: 2019/05/04 19:24:55 by jetownle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* append s2 to s1 and add terminating '\0'. Return s1. if s1 < s1 + s2 behaviour is undefined */

#include <libft.h>

char	*ft_strcat(char *restrict s1, const char *s2)
{
	int i = 0;
	int j = 0;
	
	while(s1[i] != '\0')
		i++;
	
	while(s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	
	s1[i] = '\0';
	
	return (s1);
}

