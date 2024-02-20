/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abgabrie <abgabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:33:41 by abgabrie          #+#    #+#             */
/*   Updated: 2023/11/20 21:33:42 by abgabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *s)
{
	int		i;
	char	*r;

	r = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!r)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		r[i] = s[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}