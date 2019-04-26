/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-nie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 07:58:47 by svan-nie          #+#    #+#             */
/*   Updated: 2019/04/26 08:20:56 by svan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ulstr(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	else if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (*argv[1])
		{
			ft_putchar(ulstr(*argv[1]));
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
