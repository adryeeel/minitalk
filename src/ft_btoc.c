/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btoc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocha-b <arocha-b@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 01:17:30 by arocha-b          #+#    #+#             */
/*   Updated: 2024/04/15 01:17:42 by arocha-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	ft_btoc(int signum, char *c)
{
	if (signum == SIGUSR1)
		*c <<= 1;
	else if (signum == SIGUSR2)
		*c = (*c << 1) | 1;
}
