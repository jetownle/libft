/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetownle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 22:27:30 by jetownle          #+#    #+#             */
/*   Updated: 2019/05/05 21:45:22 by jetownle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* strlcat() appends string src to the end of dst.  It will append at most dstsize -
     strlen(dst) - 1 characters.  It will then NUL-terminate, unless dstsize is 0 or the
     original dst string was longer than dstsize (in practice this should not happen as it
     means that either dstsize is incorrect or that dst is not a proper string). */

#include <libft.h>

/* #include <string.h>
#include <unistd.h>
#include <stdio.h> */

size_t 		ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t 	i;
	size_t	j;
	size_t 	k;

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

/* int main(void)
{
	char src[10]	= "ious";
	char dest[10]	= "nefar";

	size_t 			nb = 10;
	printf("Str: %zu\n", ft_strlcat(dest, src, nb));
	printf("%s", dest);
	return (0);
} */

