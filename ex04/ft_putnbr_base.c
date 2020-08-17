/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 19:34:22 by ehong             #+#    #+#             */
/*   Updated: 2020/08/15 19:38:34 by ehong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_valid(char *base)
{
	int i;
	int j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j++])
				return (0);
		}
		i++;
	}
	return (1);
}

void	recursive_print_number(int n, char *base, int len)
{
	if (n / len < 1)
		write(1, &base[n], 1);
	else
	{
		recursive_print_number(n / len, base, len);
		write(1, &base[n % len], 1);
	}
}

int		get_length(char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	temp;
	int		len;

	if (!is_valid(base))
		return ;
	len = get_length(base);
	if (nbr >= 0)
	{
		recursive_print_number(nbr, base, len);
		return ;
	}
	write(1, "-", 1);
	temp = base[nbr % len * (-1)];
	if (nbr / len * (-1) > 0)
		recursive_print_number(nbr / len * (-1), base, len);
	write(1, &temp, 1);
}
