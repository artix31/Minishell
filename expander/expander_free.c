/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expander_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amashhad <amashhad@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 22:27:31 by amashhad          #+#    #+#             */
/*   Updated: 2025/03/30 22:39:17 by amashhad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_expander.h"

void	ft_free_expander(t_expand *pand, int error)
{
	if (pand)
	{
		if (pand->var_name)
			free (pand->var_name);
		if (pand->string)
			free (pand->string);
		if (pand->quoted)
			free (pand->quoted);
		if (pand->result)
			free (pand->result);
	}
	if (error == 0)
	{
		printf("The Malloc Not Located\n");
		exit (0);
	}
}
