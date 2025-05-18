/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaupin <lcaupin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:12:00 by lcaupin           #+#    #+#             */
/*   Updated: 2025/05/18 18:39:53 by lcaupin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

// comment integrer new dans mon chemin ?

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	// if (!lst)
	// 	new->next = NULL;
	new->next = *lst;
	*lst = new;
}
