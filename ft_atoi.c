/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abgabrie <abgabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 21:33:18 by abgabrie          #+#    #+#             */
/*   Updated: 2023/11/20 21:33:19 by abgabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	min;

	min = 0;
	nb = 0;
	i = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		min = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = (str[i] - 48) + (10 * nb);
		i++;
	}
	if (min == 1)
		nb = nb * -1;
	return (nb);
}