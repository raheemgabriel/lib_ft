/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abgabrie <abgabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:32:44 by abgabrie          #+#    #+#             */
/*   Updated: 2023/12/02 09:16:07 by abgabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
void *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i = 0;
    char *psrc = (char *) src;
    char *pdst = (char *) dst;

    if(dst == NULL && src == NULL)
        return (NULL);
    if(dst < src)
    {
        return(memcpy(dst, src, len));
    }
    while(i < len--)
    {
        pdst[len] = psrc[len]; 
    }
    return(dst); 
}

// check int main