/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:07:00 by jquicuma          #+#    #+#             */
/*   Updated: 2024/11/10 19:13:44 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int ft_atoi(const char *str)
{
    int num;
    int signal;

    signal = 1;
    num = 0;
    while ((*str >= 9 && *str <= 12) || *str == ' ')
        str++;
    if (*str == '+' || *str == '-')
        if (*str++ == '-')
            signal = -1;
    while (*str >= '0' && *str <= '9')
    {
        num = (num * 10) + (*str - '0');
        str++;
    }
    return (num * signal);
}
