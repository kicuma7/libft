/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:42:53 by jquicuma          #+#    #+#             */
/*   Updated: 2024/11/10 20:52:31 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void    ft_putnbr_fd(int nb, int fd)
{
    if (nb == -2147483648)
    {
        ft_putstr_fd("-2147483648", fd);
        return ;
    }
    if (nb < 0)
    {
        ft_putchar_fd('-', fd);
        nb = nb * -1;
    }
    if (nb >= 10)
        ft_putnbr_fd(nb / 10, fd);
    ft_putchar_fd((nb % 10) + '0', fd);
}
