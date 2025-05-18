/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaupin <lcaupin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 17:08:08 by lcaupin           #+#    #+#             */
/*   Updated: 2025/05/18 18:09:20 by lcaupin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if ((*lst)->next == NULL)
	{	
		(*lst)->next = new;
		new->next = NULL;
		return;
	}
	while ((*lst)->next != NULL)			// (->) est prioritaire /R a (*)
		*lst = (*lst)->next;
	(*lst)->next = new;
	new->next = NULL;
}