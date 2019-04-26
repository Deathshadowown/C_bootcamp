/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-nie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 07:15:21 by svan-nie          #+#    #+#             */
/*   Updated: 2019/04/26 08:21:25 by svan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	rotone(char c)
{
	if ((c >= 'a' && c <= 'y') || (c >= 'A' && c <= 'Y'))
		c += 1;
	else if (c == 'z' || c == 'Z')
		c -= 25;
	return (c);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
		{
			ft_putchar(rotone(*argv[1]));
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
