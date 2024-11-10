/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:20:21 by jquicuma          #+#    #+#             */
/*   Updated: 2024/11/10 19:23:58 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char    *ft_strdup(const char *src)
{
    char            *ret;
    unsigned int    i;

    i = 0;
    ret = ft_calloc(ft_strlen(src) + 1, sizeof(char));
    if (!ret || !src)
        return (NULL);
    while (src[i])
    {
        ret[i] = src[i];
        i++;
    }
    ret[i] = '\0';
    return (ret);
}
