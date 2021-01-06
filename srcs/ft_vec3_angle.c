/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3_angle.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 16:50:55 by jblack-b          #+#    #+#             */
/*   Updated: 2021/01/06 18:36:41 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmath.h"

double	ft_vec3_angle(t_vec3 a, t_vec3 b)
{
	t_vec3	v1;
	t_vec3	v2;

	v1 = ft_vec3_normalize(a);
	v2 = ft_vec3_normalize(b);
	return (acos(ft_vec3_dot_multiply(v1, v2)));
}
