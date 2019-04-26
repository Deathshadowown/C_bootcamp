/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-nie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 14:11:07 by svan-nie          #+#    #+#             */
/*   Updated: 2019/04/25 14:13:26 by svan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	main(int argc, char **argv)
{
	int len;

	if (argc == 2)
	{
		len = ft_strlen(argv[1]);
		while (len--)
			write(1, &argv[1][len], 1);
	}
	write(1, "\n", 1);
	return (0);
}
