/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:00:39 by jquicuma          #+#    #+#             */
/*   Updated: 2024/11/10 10:08:21 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') ||
        (c >= 'A' && c <= 'Z'))
        return (1);
    return (0);
}
