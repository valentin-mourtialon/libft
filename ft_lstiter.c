/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourtia <vmourtia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:23:06 by vmourtia          #+#    #+#             */
/*   Updated: 2022/05/06 10:30:16 by vmourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (lst != NULL && f != NULL)
    {
        while(lst != NULL)
        {
            (f)(lst->content);
            lst = lst->next;
        }
    }
}