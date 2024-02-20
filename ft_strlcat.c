/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abgabrie <abgabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:33:44 by abgabrie          #+#    #+#             */
/*   Updated: 2023/11/21 09:09:09 by abgabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t ft_strlcat(char *dst, const char *src, size_t d_size)
{
    size_t i = 0;
   size_t len = strlen(dst);
   char * src1 = (char *)src;
   if(d_size - 1 >= len)
    return(0);
    while(i != len)
    {
        
        i++;
    }
    
    
   
}

int main()
{
    char dest[7] = "hello, ";
    char src[] = "world!";
    // printf("%zu\n", ft_strlcat(dest, src, 20));
    printf("%zu\n: %s", strlcat(dest, src, 7), dest);
}
//Fix