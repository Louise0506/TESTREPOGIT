/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaupin <lcaupin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 18:29:14 by lcaupin           #+#    #+#             */
/*   Updated: 2025/05/18 18:13:12 by lcaupin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void	del(void *x)
{
	while (x)
		free(x);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
}