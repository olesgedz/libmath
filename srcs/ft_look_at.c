/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_look_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 16:44:04 by jblack-b          #+#    #+#             */
/*   Updated: 2019/09/07 16:51:13 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmath.h"

t_mat4 ft_look_at(t_vec3 eye, t_vec3 target, t_vec3 upWorld)
{
	// t_vec3 w = ft_vec3_normalize(eye);
	// t_vec3 u = ft_vec3_normalize(ft_vec3_cross_multiply(upWorld, eye));
	// t_vec3 v = ft_vec3_normalize(ft_vec3_cross_multiply(w,u));
  
	// return (ft_mat4_transpose((t_mat4){u.x, u.y, u.z, ft_vec3_dot_multiply(u, ft_vec3_neg(eye)),
	// 									v.x, v.y, v.z, ft_vec3_dot_multiply(v, ft_vec3_neg(eye)),
	// 									w.x, w.y, w.z, ft_vec3_dot_multiply(v, ft_vec3_neg(eye)),
	// 									0, 0, 0, 1}));
	t_mat4 res;
	res = ft_mat4_identity_matrix();
	t_vec3 f;
	t_vec3 s;
	t_vec3 u;
	f = ft_vec3_normalize(ft_vec3_substract(target, eye));
	s = ft_vec3_normalize(ft_vec3_cross_multiply(f, upWorld));
	u = ft_vec3_cross_multiply(s,f);
		res.matrix[0][0] = s.x;
		res.matrix[1][0] = s.y;
		res.matrix[2][0]= s.z;
		res.matrix[0][1] = u.x;
		res.matrix[1][1] = u.y;
		res.matrix[2][1] = u.z;
		res.matrix[0][2] =-f.x;
		res.matrix[1][2] =-f.y;
		res.matrix[2][2] =-f.z;
		res.matrix[3][0] =-ft_vec3_dot_multiply(s, eye);
		res.matrix[3][1] =-ft_vec3_dot_multiply(u, eye);
		res.matrix[3][2] = ft_vec3_dot_multiply(f, eye);
ft_mat4_print(res);
	return res; 


	// t_vec3 forward;
	// t_vec3 left;
	// t_vec3 up;
	// forward = ft_vec3_substract(eye, target);
	// forward = ft_vec3_normalize(forward);
	// left = ft_vec3_cross_multiply(upWorld, forward);
	// left = ft_vec3_normalize(left);
	// up = ft_vec3_cross_multiply(forward, left);
	
	// res.matrix[0] = left.x; 
	// res.matrix[1] = left.y; 
	// res.matrix[2] = left.z; 
	// res.matrix[4] = up.x; 
	// res.matrix[5] = up.y; 
	// res.matrix[6] = up.z; 
	// res.matrix[8] = -forward.x; 
	// res.matrix[9] = -forward.y; 
	// res.matrix[10]= -forward.z;
	// res.matrix[15]= 1; 
	// res.matrix[12]= -ft_vec3_dot_multiply(left, eye); 
	// res.matrix[13]= -ft_vec3_dot_multiply(up, eye);
	// res.matrix[14]= ft_vec3_dot_multiply(forward, eye);
	// 
}