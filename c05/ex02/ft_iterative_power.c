/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehong <ehong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 23:53:55 by ehong             #+#    #+#             */
/*   Updated: 2020/08/15 16:55:17 by ehong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (power < 0)
		return (0);
	else if ((nb == 0 && power == 0) || (nb == 1 || power == 0))
		return (1);
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
