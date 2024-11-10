/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:23:39 by jquicuma          #+#    #+#             */
/*   Updated: 2024/11/10 16:46:18 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char    *ft_strnstr(const char *str, const char *needle)
{
    unsigned int    i;
    unsigned int    past_i;
    unsigned int    j;

    i = 0;
    if (!str || !needle)
        return (NULL);
    while (str[i])
    {
        j = 0;
        if (ft_strlen(&str[i]) < ft_strlen(needle))
            return (NULL);
        if (str[i] == needle[j])
        {
            past_i = i;
            while (str[i++] == needle[j++])
            {
                if (!needle[j])
                    return ((char *)&str[past_i]);
            }
            i = past_i;
        }
        i++;
    }
    return (NULL);
}
