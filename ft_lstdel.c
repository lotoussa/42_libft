/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstdel.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/22 15:32:13 by lotoussa     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/22 15:32:13 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del) (void *, size_t))
{
	t_list	*tmp;
	t_list	*list;

	list = *alst;
	while (list)
	{
		del(list->content, list->content_size);
		tmp = list->next;
		free(list);
		list = tmp;
	}
	*alst = NULL;
}
