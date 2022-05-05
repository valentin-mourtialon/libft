/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourtia <vmourtia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:29:23 by vmourtia          #+#    #+#             */
/*   Updated: 2022/05/05 16:22:14 by vmourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{   
    t_list  *ptr;

    if (!lst)
        return (NULL);
    ptr = lst;
    while (ptr->next != NULL)
        ptr = ptr->next;
    return (ptr);
}