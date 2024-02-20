/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abgabrie <abgabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:33:37 by abgabrie          #+#    #+#             */
/*   Updated: 2023/11/20 21:33:38 by abgabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
	int i;
    char *sp = (char *)s;
    i = 0;
    while(sp[i] != c)
        i++;
    return (sp + i);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     const char i[] = "helooooo";
    
//     printf("%s", ft_strchr(i, 'l'));
//     printf("\n%s", strchr(i, 'l'));
// }