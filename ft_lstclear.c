/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourtia <vmourtia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 09:51:27 by vmourtia          #+#    #+#             */
/*   Updated: 2022/05/06 10:53:12 by vmourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  **lst_iter;
    t_list  *temp;

    if (*lst != NULL && del != NULL)
    {
        lst_iter = lst;
        while (*lst_iter != NULL)
        {
            temp = (*lst_iter)->next;
            ft_lstdelone(*lst_iter, (del));
            (*lst_iter) = temp;
        }
    }
    lst = NULL;
}