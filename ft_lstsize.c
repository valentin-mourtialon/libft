/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmourtia <vmourtia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:35:50 by vmourtia          #+#    #+#             */
/*   Updated: 2022/05/05 15:24:15 by vmourtia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int nbr_of_elements;

    nbr_of_elements = 0;
    while (lst != NULL)
    {
        nbr_of_elements++;
        lst = lst->next;
    }
    return (nbr_of_elements);
}