/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abgabrie <abgabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:33:15 by abgabrie          #+#    #+#             */
/*   Updated: 2023/11/21 08:36:15 by abgabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
void ft_bzero(void *s, size_t n)
{
    size_t i = 0;
    unsigned char* x;
    x =((unsigned char*) s);
    while(i < n)
    {
       x[i] = 0;
       i++; 
    }
}


#include <stdio.h>
int  main()
{
    char str[] = "hello";
    int i = 0;
    ft_bzero(str, 2);
    while (i < 5)
    {
        printf("%c", str[i]);
        i++;
    }
}