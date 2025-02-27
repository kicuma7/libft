/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:02:27 by jquicuma          #+#    #+#             */
/*   Updated: 2025/02/27 08:28:01 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*t_dest;
	const unsigned char	*t_src;

	t_dest = (unsigned char *)dest;
	t_src = (const unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (t_dest > t_src)
	{
		while (n-- > 0)
			t_dest[n] = t_src[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			t_dest[i] = t_src[i];
			i++;
		}
	}
	return (dest);
}
