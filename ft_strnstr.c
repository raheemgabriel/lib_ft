/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abgabrie <abgabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:33:54 by abgabrie          #+#    #+#             */
/*   Updated: 2023/11/20 21:33:55 by abgabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(char const *haystack, char const *needle, size_t n)
{
    size_t i = 0;
    size_t j = 0;
    if(!*needle)
    return((char *)haystack);
    while(haystack[i] != '\0' && i < n)
    {
        while(haystack[i] == needle[j])
        {
            i++;
            j++;
            if(needle[j] == '\0')
                return((char *)&haystack[i - j]);
        }
        i++;
    }
    return (NULL);
}
int main()
{
    printf("%s\n", ft_strnstr("CXCx", "NULL", 4));
    printf("%s\n", strnstr("CXCx", "NULL", 4));
}