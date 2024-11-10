/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:14:56 by jquicuma          #+#    #+#             */
/*   Updated: 2024/11/10 17:23:28 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    char    *str;

    str = (char *)s;
    i = 0;
    while (n--)
    {
        if (str[i] == (char)c)
            return ((void *)s + i);
        i++;
    }
    return (NULL);
}
