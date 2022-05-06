/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourtia <vmourtia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:33:30 by vmourtia          #+#    #+#             */
/*   Updated: 2022/05/06 11:25:07 by vmourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  **new_lst;
    t_list  *first_element;

    if (!lst || !del || !f)
        return (NULL);
    new_lst = ft_lstnew((f)(lst->content));
    if (!new_lst)
        return (NULL);
    first_element = new_lst;
    lst = lst->next;
    while (lst != NULL)
    {
        new_lst->next = ft_lstnew((f)(lst->content));
        if (!(new_lst->next))
        {
            ft_lstclear(&first_element, (del));
            return (NULL);
        }
        new_lst = new_lst->next;
        lst = lst->next;
    }
    new_lst->next = NULL;
    return (new_lst);
}