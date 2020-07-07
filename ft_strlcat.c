/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/22 15:32:16 by lotoussa     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/22 15:32:16 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		j;
	int			k;

	i = 0;
	j = 0;
	k = 0;
	while (dst[i] && i < size)
		i++;
	k = i + ft_strlen(src);
	if (i != size)
	{
		while (i < size - 1)
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	return (k);
}
