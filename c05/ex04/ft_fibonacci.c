/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehong <ehong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 23:54:37 by ehong             #+#    #+#             */
/*   Updated: 2020/08/14 23:54:39 by ehong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int result;

	if (index < 0)
		return (-1);
	else if (index == 0 | index == 1)
		return (index);
	result = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (result);
}
