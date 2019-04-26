/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-nie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 14:03:04 by svan-nie          #+#    #+#             */
/*   Updated: 2019/04/25 14:09:39 by svan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	repeat_alpha(char c)
{
	int repeat;

	if (c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else
		repeat = 1;
	return (repeat);
}

int	main(int argc, char **argv)
{
	int repeat;

	if (argc == 2)
	{
		while (*argv[1])
		{
			repeat = repeat_alpha(*argv[1]);
			while (repeat--)
				write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
