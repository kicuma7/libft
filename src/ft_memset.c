/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:50:45 by jquicuma          #+#    #+#             */
/*   Updated: 2024/11/10 17:21:28 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    char            *str;
    unsigned int    i;

    str = (char *)s;
    i = 0;
    while(n--)
        str[i++] = (char)c;
    return (s);
}
