/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manki <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 14:00:21 by manki             #+#    #+#             */
/*   Updated: 2018/06/07 10:34:51 by lguiller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <unistd.h>
#include <stdlib.h>

int				main(int ac, char **av)
{
	char		*tab;
	t_tetris	*tetris;

	ac--;
	av++;
	if (ac == 1)
	{
		if (!(tab = ft_checkfile(av[0])))
			ft_error("error", 1, ft_puterror);
		if (!(tetris = ft_record_tetris(tab)))
			ft_error("error", 1, ft_puterror);
		ft_resolve_grid(tetris);
		ft_free_tetris(tetris);
	}
	else
		ft_error("usage: ./fillit [file_name]", 2, ft_putendl);
	return (0);
}
