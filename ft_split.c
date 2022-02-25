/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbahraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 22:02:56 by cbahraou          #+#    #+#             */
/*   Updated: 2022/02/25 10:43:25 by cbahraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	num_char(const char *s, char c, size_t *index)
{
	size_t	lenght;

	lenght = 0;
	if (s == NULL)
		return (0);
	while (s[*index] == c)
		(*index)++;
	while (s[*index] != '\0' && s[*index] != c)
	{
		lenght++;
		(*index)++;
	}
	return (lenght);
}

static size_t	num_substr(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_subbstr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	dst = (char *)malloc(len + 1);
	if (dst == NULL)
		return (NULL);
	while (i < len && s[start] != '\0')
	{
		dst[i] = s[start];
		start++;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

static char	**free_memory(char **string, int i)
{
	if (string == NULL)
		return (NULL);
	while (i-- > 0)
		free(string[i]);
	free(string);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**string;
	size_t	count;
	size_t	len_substr;
	size_t	index;
	size_t	i;

	i = 0;
	index = 0;
	count = num_substr(s, c);
	if (s == NULL)
		return (NULL);
	string = (char **)malloc((count + 1) * sizeof(char *));
	if (string == NULL)
		return (NULL);
	while (i < count)
	{
		len_substr = num_char(s, c, &index);
		string[i] = ft_subbstr(s, index - len_substr, len_substr);
		if (string[i] == NULL)
			return (free_memory(string, i));
		i++;
	}
	string[i] = NULL;
	return (string);
}

/*int main()
{
	char s[]="     chaimaa bahraoui";
	char c = ' ';
	int i=0;
	char** string;
	string  = ft_split((char*)s,c);
	while(string[i] != NULL)
	{
		printf("%s\n",string[i]);
		i++;
	}
	return 0;
}*/
