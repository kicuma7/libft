/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:50:17 by jquicuma          #+#    #+#             */
/*   Updated: 2024/11/10 22:15:21 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    unsigned int    begin;
    unsigned int    end;
    char            *trimed;
    unsigned int    size;
    
    begin = 0;
    while (s1[begin])
    {
        if (ft_strchr(set, s1[begin]) == NULL)
             break;
        begin++;
    }
    end = ft_strlen(s1);
    while (--end > 0)
        if (ft_strrchr(set, s1[end]) == NULL)
            break;
    if (begin >= end)
        return (NULL);
    size = (end - begin) + 1;
    trimed = malloc(size + 1);
    ft_strlcpy(trimed, s1 + begin, size + 1);
    return (trimed);
}
