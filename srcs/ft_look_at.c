/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_look_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 16:44:04 by jblack-b          #+#    #+#             */
/*   Updated: 2021/01/06 18:36:35 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmath.h"

t_mat4	ft_look_at(t_vec3 eye, t_vec3 target, t_vec3 up_world)
{
	t_vec3 f;
	t_vec3 s;
	t_vec3 u;
	t_mat4 res;

	res = ft_mat4_identity_matrix();
	f = ft_vec3_normalize(ft_vec3_substract(target, eye));
	s = ft_vec3_normalize(ft_vec3_cross_multiply(f, up_world));
	u = ft_vec3_cross_multiply(s, f);
	res.matrix[0][0] = s.x;
	res.matrix[1][0] = s.y;
	res.matrix[2][0] = s.z;
	res.matrix[0][1] = u.x;
	res.matrix[1][1] = u.y;
	res.matrix[2][1] = u.z;
	res.matrix[0][2] = -f.x;
	res.matrix[1][2] = -f.y;
	res.matrix[2][2] = -f.z;
	res.matrix[3][0] = -ft_vec3_dot_multiply(s, eye);
	res.matrix[3][1] = -ft_vec3_dot_multiply(u, eye);
	res.matrix[3][2] = ft_vec3_dot_multiply(f, eye);
	return (res);
}
