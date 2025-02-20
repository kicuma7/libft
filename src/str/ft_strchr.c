/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 22:27:18 by jquicuma          #+#    #+#             */
/*   Updated: 2025/02/20 22:35:14 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../includes/libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	if (!c || !str)
		return (NULL);
	while (str[i])
	{
		if (c == str[i])
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
