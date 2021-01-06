/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec3_projection.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:33:44 by jblack-b          #+#    #+#             */
/*   Updated: 2021/01/06 18:40:01 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libmath.h"

float	ft_vec3_projection(t_vec3 a, t_vec3 b)
{
	return (ft_vec3_dot_multiply(b, a) / ft_vec3_norm(b));
}
