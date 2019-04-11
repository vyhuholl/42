/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghezn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 10:59:27 by sghezn            #+#    #+#             */
/*   Updated: 2019/04/08 17:12:03 by sghezn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*dest;

	if (!(dest = (char*)malloc(sizeof(*dest) * (ft_strlen(s1) + 1))))
		return (NULL);
	i = 0;
	while (i <= ft_strlen(s1))
	{
		dest[i] = s1[i];
		i++;
	}
	return (dest);
}
