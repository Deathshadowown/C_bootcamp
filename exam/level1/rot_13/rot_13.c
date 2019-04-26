/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-nie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 14:15:09 by svan-nie          #+#    #+#             */
/*   Updated: 2019/04/26 08:22:26 by svan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	rot_13(char c)
{
	if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
		c += 13;
	else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
		c -= 13;
	return (c);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
		{
			ft_putchar(rot_13(*argv[1]));
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
