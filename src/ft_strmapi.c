/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:40:56 by jquicuma          #+#    #+#             */
/*   Updated: 2024/11/12 18:46:42 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t  size;
    size_t  i;
    char    *str;
    
    size = ft_strlen(s);
    i = 0;
    str = malloc(size + 1);
    if (!str)
        return (NULL);
    while (i < size)
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}
