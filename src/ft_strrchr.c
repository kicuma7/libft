/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 15:39:19 by jquicuma          #+#    #+#             */
/*   Updated: 2024/11/10 15:53:03 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char    *ft_strrchr(const char *str, int c)
{
    unsigned int    i;

    i = ft_strlen(str);
    if (c == '\0')
        return ((char *)&str[i]);
    while (i--)
        if (str[i] == (char)c)
            return ((char *)&str[i]);
    return (NULL);
}
