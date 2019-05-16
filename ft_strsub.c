/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eulee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 21:45:44 by eulee             #+#    #+#             */
/*   Updated: 2019/05/11 16:55:09 by eulee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*strsub;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	strsub = (char *)malloc(sizeof(char) * len + 1);
	if (!strsub)
		return (NULL);
	while (i < len)
	{
		strsub[i] = s[i + start];
		i += 1;
	}
	strsub[i] = '\0';
	return (strsub);
}
