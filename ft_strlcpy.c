/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abgabrie <abgabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:33:46 by abgabrie          #+#    #+#             */
/*   Updated: 2023/12/03 15:07:05 by abgabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    int i = 0;
    int len = strlen(src);
`
    if(dstsize)
    {
        while((src[i]) && (i < dstsize - 1))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    return(len);
}
// int main()
// {
//     char dest[40] = "Thirt";
//     char src[ ] = "";
//     printf("%zu\n", ft_strlcpy(dest, src, 3));
//     printf("%zu\n", strlcpy(dest, src, 3));
    
// }