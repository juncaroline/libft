/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cabo-ram <cabo-ram@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:16:27 by cabo-ram          #+#    #+#             */
/*   Updated: 2024/10/16 15:02:50 by cabo-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_scount(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (count);
}

static size_t	ft_stl(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static char	*ft_copy(char const *s, char c)
{
	char	*sst;
	size_t	len;

	len = ft_scount(s, c);
	sst = (char *)malloc(sizeof(char) * (len + 1));
}
/*{
	size_t	i;
	size_t	j;
	size_t	sc;
	size_t	len;

	i = 0;
	sc = ft_scount(s, c);
	while (i < sc)
	{
		len = ft_stl(s, c);
		sst[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (sst[i] == NULL)
		{
			j = 0;
			while (j < i)
				free(sst[j++]);
			free(sst);
			return (NULL);
		}
		ft_strdup(sst[i]);
		i++;
	}
	return (ft_strlcpy);
}*/

char	**ft_split(char const *s, char c)
{
	char	**sst;
	size_t	sc;

	if (s == NULL)
		return (NULL);
	sc = ft_scount(s, c);
	sst = (char **)malloc(sizeof(char *) * (sc + 1));
	if (sst == NULL)
		return (NULL);
	ft_copy(s, sst, c);
	sst[sc] = NULL;
	return (sst);
}
