/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abgabrie <abgabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:33:57 by abgabrie          #+#    #+#             */
/*   Updated: 2023/11/20 21:33:58 by abgabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	x;
	while (*s)
		s++;
	    x = *s;
	while (*s >= 0)
	{
		if (s[x] == (char) c)
			return ((char *)(s + x));
		x--;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     const char i[] = "helooooo";
    
//     printf("%s", ft_strrchr(i, 'l'));
//     printf("\n%s", strrchr(i, 'l'));
// }