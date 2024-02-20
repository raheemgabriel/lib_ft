/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abgabrie <abgabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:32:51 by abgabrie          #+#    #+#             */
/*   Updated: 2023/11/21 08:41:54 by abgabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ret;

	ret = (unsigned char *)s;
	c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*ret == c)
			return (ret);
		ret++;
        i++;
	}
	return (NULL);
}

int main()
{
    const char i[] = "helooooo";
    
    printf("%s", ft_memchr(i, 'l', 3));
    printf("\n%s", memchr(i, 'l', 3));
}
    // printf("ret address value = %p\n", ret);
    // printf("n the size = %d\n", n);
    // printf("comparing *ret < n -> %c < %\n", *ret , n);