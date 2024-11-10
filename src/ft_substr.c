/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 21:01:54 by jquicuma          #+#    #+#             */
/*   Updated: 2024/11/10 21:29:11 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub_str;
    size_t  str_len;
    size_t  i;

    if (!s || !s[0] || len == 0)
        return(NULL);
    str_len = ft_strlen(s);
    if (start > str_len)
        return (NULL);
    sub_str = malloc(len + 1);
    if (!sub_str)
        return (NULL);
    i = 0;
    while (len-- && s[start + i])
    {
        sub_str[i] = s[start + i];
        i++;
    }
    sub_str[i] = '\0';
    return (sub_str);
}
