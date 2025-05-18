/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcaupin <lcaupin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 13:34:52 by lcaupin           #+#    #+#             */
/*   Updated: 2025/05/18 19:39:14 by lcaupin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
#include <stdlib.h>

// on ne doit pas caster dcp ?

t_list	*ft_lstnew(void *mon_content)
{
	t_list	*nv_element;
	
	nv_element = (t_list *)malloc(sizeof(t_list));
	if (!nv_element)
		return (NULL);
	nv_element->content = (void *)mon_content;		// je caste en void *
	nv_element->next = NULL;		// car je ne sais pas encore vers quoi next pointe
	return (nv_element);			// return (nb_element->content) pour retourner ma chaine
}

#include <stdio.h>
int	main()
{
	char str[] = "ma chaine";
	printf("%s", ft_lstnew(str));
	return (0);
}

// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }					t_list;