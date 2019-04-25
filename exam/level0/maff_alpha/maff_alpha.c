/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-nie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 11:35:21 by svan-nie          #+#    #+#             */
/*   Updated: 2019/04/25 11:37:33 by svan-nie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char lower;
	char upper;

	lower = 'a';
	upper = 'B';
	while (lower <= 'z' || upper <= 'Z')
	{
		write(1, &lower, 1);
		write(1, &upper, 1);
		lower+=2;
		upper+=2;
	}
	write(1, "\n", 1);
	return (0);
}
