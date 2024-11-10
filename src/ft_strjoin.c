/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:34:13 by jquicuma          #+#    #+#             */
/*   Updated: 2024/11/10 21:40:30 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char    *ft_strjoin(const char *s1, const char *s2)
{
    char            *joined;
    unsigned int    i;
    unsigned int    j;
    
    if (!s1 || !s2)
        return (NULL);
    joined = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!joined)
        return (NULL);
    i = 0;
    j = 0;
    while (s1[i])
        joined[i++] = s1[j++];
    j = 0;
    while (s2[j])
        joined[i++] = s2[j++];
    joined[i] = '\0';
    return (joined);
}
