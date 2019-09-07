/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3_multiply_matrix.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 16:52:13 by jblack-b          #+#    #+#             */
/*   Updated: 2019/09/07 16:52:33 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmath.h"

t_vec3	ft_vec3_multiply_matrix(t_vec3 v, t_mat4 m)
{
	t_vec3	res;

	res.x = v.x * m.matrix[0][0] +
			v.y * m.matrix[0][1] +
			v.z * m.matrix[0][2] +
			v.w * m.matrix[0][3];
	res.y = v.x * m.matrix[1][0] +
			v.y * m.matrix[1][1] +
			v.z * m.matrix[1][2] +
			v.w * m.matrix[1][3];
	res.z = v.x * m.matrix[2][0] +
			v.y * m.matrix[2][1] +
			v.z * m.matrix[2][2] +
			v.w * m.matrix[2][3];
	res.w = v.x * m.matrix[3][0] +
			v.y * m.matrix[3][1] +
			v.z * m.matrix[3][2] +
			v.w * m.matrix[3][3];
	return (res);
}