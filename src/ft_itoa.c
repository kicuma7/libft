/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 23:36:44 by jquicuma          #+#    #+#             */
/*   Updated: 2024/11/11 00:11:32 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static void ft_strrev(char **s)
{
    char    *str;
    char    tmp;
    size_t  half_len;
    size_t  len;
    size_t  i;

    str = *s;
    len = ft_strlen(str);
    half_len = len / 2;
    i = 0;
    while (i < half_len)
    {
        tmp = str[i];
        str[i++] = str[--len];
        str[len] = tmp;
    }
}

static void convert(int n, bool is_negative, char *num)
{
    int     i;
    
    i = 0;
    while (n > 10)
    {
        num[i] = (n % 10) + '0';
        i++;
        n /= 10;
    }
    num[i++] = (n % 10) + '0';
    if (is_negative)
        num[i++] = '-';
    num[i] = '\0';
}

char    *ft_itoa(int n)
{
    char            *num;
    int             n1;
    unsigned int    i;
    bool            is_negative;

    if (n == -2147483648)
        return ("-2147483648");
    i = 1;
    if (n < 0)
    {
        n = n * -1;
        is_negative = true;
    }
    n1 = n;
    while (n1 > 10)
    {
        n1 = n1 / 10;
        i++;
    }
    num = malloc(i + 2);
    convert(n, is_negative, num);
    ft_strrev(&num);
    return (num);
}
