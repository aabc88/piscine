/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 23:52:44 by ehong             #+#    #+#             */
/*   Updated: 2020/08/14 23:55:20 by ehong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int n)
{
	int i;
	int temp;

	if (n < 2)
		return (0);
	i = 2;
	temp = n / 2;
	while (i <= temp && i <= 65536)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (is_prime(nb) == 0)
		nb++;
	return (nb);
}
