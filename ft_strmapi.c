/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmapi.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/22 15:32:17 by lotoussa     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/22 15:32:17 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	int		i;
	char	*tab;

	i = 0;
	if (s)
	{
		if (!(tab = (char *)malloc(sizeof(*tab) * (ft_strlen(s) + 1))))
			return (NULL);
		while (s[i])
		{
			tab[i] = f(i, s[i]);
			i++;
		}
		tab[i] = '\0';
		return (tab);
	}
	return (NULL);
}
