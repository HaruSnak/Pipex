/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmoreno <shmoreno@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:08:32 by shmoreno          #+#    #+#             */
/*   Updated: 2024/02/25 22:56:28 by shmoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c && in_word)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*p;
	size_t	i;

	p = (char *)malloc(n + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (i < n)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

static char	**allocate_words(const char *s, char c, int count, char *c_str)
{
	char	**result;
	int		i;

	result = (char **)malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < count)
	{
		while (*s == c)
			s++;
		result[i] = ft_strndup(s, strcspn(s, c_str));
		if (!result[i])
		{
			while (i >= 0)
				free(result[i--]);
			free(result);
			return (NULL);
		}
		s += strcspn(s, c_str);
		i++;
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**result;
	char	*c_str;

	if (!s)
		return (NULL);
	c_str = malloc(2 * sizeof(char));
	if (!c_str)
		return (NULL);
	sprintf(c_str, "%c", c);
	count = word_count(s, c);
	result = allocate_words(s, c, count, c_str);
	free(c_str);
	return (result);
}

/*int main() {
    const char *s = "";
    char c = 'i';

    char **result = ft_split(s, c);

    for (int i = 0; result[i] != NULL; i++) {
        printf("%s\n", result[i]);
        free(result[i]);  // Libère la mémoire allouée dynamiquement
    }
    free(result);  

    return (0);
}*/