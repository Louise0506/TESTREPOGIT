/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaupin <lcaupin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 14:53:52 by lcaupin           #+#    #+#             */
/*   Updated: 2025/05/18 18:13:16 by lcaupin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

// renvoie le dernier element de la liste
// pq une lst c'est pas un double pointeur ?

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*dernier_element;
	
	dernier_element = lst;
	while (dernier_element->next != NULL)
		dernier_element = dernier_element->next;
	return(dernier_element);
}
