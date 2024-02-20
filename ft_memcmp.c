/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abgabrie <abgabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:32:49 by abgabrie          #+#    #+#             */
/*   Updated: 2023/11/20 21:32:50 by abgabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i = 0;
	unsigned char	*l1;
	unsigned char	*l2;

	
	l1 = (unsigned char *)s1;
	l2 = (unsigned char *)s2;
	while (i < n)
	{
		if (l1[i] != l2[i])
		{
			return (l1[i] - l2[i]);
		}
		i++;
	}
	return (0);
}

// int main()
// {
//     char *str = "hixl";
//     char *str1 = "hizq";
//     printf("%d", ft_memcmp(str, str1, 4));
//     printf("\n%d", memcmp(str, str1, 4));
// }