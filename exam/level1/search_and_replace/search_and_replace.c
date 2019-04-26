/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-nie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 07:22:42 by svan-nie          #+#    #+#             */
/*   Updated: 2019/04/26 07:57:48 by svan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int count;

	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (argv[2][1] != '\0' && argv[2][1])
	{
		write(1, "\n", 1);
		return (0);
	}
	count = 0;
	while (argv[1][count] != '\0')
	{
		if (argv[1][count] == argv[2][0])
			argv[1][count] = argv[3][0];
		write(1, &argv[1][count], 1);
		argv[1]++;
	}
	write(1, "\n", 1);
	return (0);
}
