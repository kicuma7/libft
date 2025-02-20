/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquicuma <jquicuma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 23:21:34 by jquicuma          #+#    #+#             */
/*   Updated: 2025/02/20 23:31:31 by jquicuma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;
	int	found_pos;

	i = 0;
	if (!haystack || !needle)
		return (NULL);
	while (haystack[i] && --len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			found_pos = i;
			while (haystack[i] == needle[j] && needle[j] && haystack[i])
			{
				j++;
				i++;
			}
			if (!needle[j])
				return ((char *)&haystack[found_pos]);
			i = found_pos;
		}
		i++;
	}
	return (NULL);
}
