/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 22:42:48 by jquicuma          #+#    #+#             */
/*   Updated: 2024/11/10 23:28:41 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static size_t  strlen_endl(const char *str, char c)
{
    size_t  len;

    len = 0;
    while (str[len] && str[len] != c)
        len++;
    return (len);
}

static size_t str_count(const char *str, char c)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    j = 0;
    while (str[j])
    {
        while (str[j] == c)
            j++;
        if (str[j] != c && ft_isprint(str[j]))
        {
            i++;
            while (str[j] != c && ft_isprint(str[j]))
                j++;
        }
    }
    return (i);
}

char    **ft_split(const char *str, char c)
{
    char    **p;
    int     i;
    int     j;
    int     k;
    
    p = malloc((str_count(str, c) + 1) * sizeof(char *));
    if (!p)
        return (NULL);
    i = 0;
    k = 0;
    while (str[k])
    {
        j = 0;
        while (str[k] == c && str[k])
            k++;
        if (str[k])
        {
            p[i] = malloc(strlen_endl(&str[k], c) + 1);
            while (str[k] != c && str[k])
                p[i][j++] = str[k++];
            p[i][j] = '\0';
        }
        i++;
    }
    p[i] = NULL;
    return (p);
}
