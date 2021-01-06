/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 16:20:29 by jblack-b          #+#    #+#             */
/*   Updated: 2021/01/06 18:49:05 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmath.h"

t_mat4			ft_mat4_identity_matrix(void)
{
	t_mat4		res;
	int			i;
	int			j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			res.matrix[i][j] = 0;
	}
	res.matrix[0][0] = 1;
	res.matrix[1][1] = 1;
	res.matrix[2][2] = 1;
	res.matrix[3][3] = 1;
	return (res);
}

t_mat4			ft_mat4_zero(void)
{
	t_mat4	res;
	int		i;
	int		j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			res.matrix[i][j] = 0;
	}
	return (res);
}

t_mat4			ft_mat4_multiply_mat4(t_mat4 a, t_mat4 b)
{
	t_mat4			res;
	int				i;
	int				j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			res.matrix[i][j] = a.matrix[i][0] * b.matrix[0][j] +
				a.matrix[i][1] * b.matrix[1][j] +
				a.matrix[i][2] * b.matrix[2][j] +
				a.matrix[i][3] * b.matrix[3][j];
		}
	}
	return (res);
}

t_mat4			ft_mat4_translation_matrix(t_vec3 v)
{
	t_mat4	res;

	res = ft_mat4_identity_matrix();
	res.matrix[3][0] = v.x;
	res.matrix[3][1] = v.y;
	res.matrix[3][2] = v.z;
	return (res);
}
