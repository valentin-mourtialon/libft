/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourtia <vmourtia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:07:17 by vmourtia          #+#    #+#             */
/*   Updated: 2022/05/06 10:06:39 by vmourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (lst != NULL && del != NULL)
    {
        if (lst->content != NULL)
        {
            (del)(lst->content);
            free(lst);
        }
    }
}