/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 15:28:18 by jquicuma          #+#    #+#             */
/*   Updated: 2024/11/10 15:55:17 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char    *ft_strchr(const char *str, int c)
{
    unsigned int    i;

    i = 0;
    if (c == '\0')
    {
        i = ft_strlen(str);
        return ((char *)&str[i]);
    }
    while (str[i])
    {
        if (str[i] == (char)c)
            return ((char *)&str[i]);
        i++;
    }
    return (NULL);
}
