/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaupin <lcaupin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 14:37:44 by lcaupin           #+#    #+#             */
/*   Updated: 2025/05/18 18:13:27 by lcaupin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

// compte le nb d'elements de la liste
// creer une fonction pour check si elle est vide ?

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	if (!lst)
		return (0);
	while(lst)
	{
		count += 1;
		lst = lst->next;
	}
	return (count);
}

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;