/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:39:18 by jquicuma          #+#    #+#             */
/*   Updated: 2024/11/10 20:40:36 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void    ft_putstr_fd(char *str, int fd)
{
    unsigned int    i;
    
    i = 0;
    while (str[i])
        ft_putchar_fd(str[i++], fd);
}
