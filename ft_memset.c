/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abgabrie <abgabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:32:41 by abgabrie          #+#    #+#             */
/*   Updated: 2023/11/20 21:32:42 by abgabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void *ft_memset(void *b, int c, size_t len)
{
    size_t i = 0;
    unsigned char *s;
    s = ((unsigned char *) b);
    if (!s)
        return (NULL);
    while(i < len)
    {
        s[i] = ((unsigned char) c);
        i++;
    }
    return(s);
}
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char *dick = NULL;
//     char c = 'c';
//     // printf("%s", ft_memset(dick, c, 2));
//     printf("\n%s", memset(dick, c, 2));
// }
