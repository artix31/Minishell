/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amashhad <amashhad@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 06:14:49 by amashhad          #+#    #+#             */
/*   Updated: 2025/03/22 13:37:18 by amashhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "builtin.h"

void	builtin(t_read *line)
{
	if (line->tokens == NULL)
		return ;
	else if (ft_strcmp(line->tokens[0], "env") == 0)
		ft_printarr(line->enviro);
	else if (ft_strcmp(line->tokens[0], "clear") == 0)
	{
		rl_clear_display(0, 0);
		ft_putendl_fd("", 1);
	}
	else if (ft_strcmp(line->tokens[0], "pwd") == 0)
	{
		ft_get_prompt(line);
		ft_putendl_fd(line->cwd, 1);
	}
	else if (ft_strcmp(line->tokens[0], "export") == 0)
		ft_handle_export(line);
	else if (ft_strcmp(line->tokens[0], "unset") == 0)
		ft_handle_unset(line);
	else if (ft_strcmp(line->tokens[0], "cd") == 0)
		ft_handle_cd(line);
	else if (ft_strcmp(line->tokens[0], "echo") == 0)
	{
		if (!line->tokens[1])
			ft_putstr("");
		else
			ft_handle_echo(line);
	}
	else
	{
		ft_printf("%s: command not found\n", line->tokens[0]);
		line->exit_status = 127;
	}
}
