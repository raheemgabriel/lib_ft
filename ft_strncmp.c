/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abgabrie <abgabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:33:52 by abgabrie          #+#    #+#             */
/*   Updated: 2023/11/20 21:33:53 by abgabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned int i;
    i = 0;
    if(n == 0)
        return (0);
    while(i < n && s1 && s2 && s1[i] == s2[i])
    {
        i++;
    }
    return (s1[i] - s2[i]);
}
int main()
{
    printf("%i\n", ft_strncmp("Sssty", "Sssen", 4));
    printf("%i\n", strncmp("Sssty", "Sssen", 4));
}
// Still looks for a difference 
//FIXED