/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abgabrie <abgabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:33:59 by abgabrie          #+#    #+#             */
/*   Updated: 2023/11/20 21:34:00 by abgabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int tolower(int c)
{
    if((c >= 'A' && c <= 'Z'))
        c += 32;
    return (c);
}