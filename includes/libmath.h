/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libmath.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblack-b <jblack-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 12:54:27 by jblack-b          #+#    #+#             */
/*   Updated: 2021/01/06 18:34:30 by jblack-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBMATH_H
# define LIBMATH_H

# include "libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <math.h>

typedef struct s_vec3		t_vec3;
typedef struct s_vertex		t_vertex;
typedef struct s_sector		t_sector;
typedef struct s_coord		t_coord;
typedef struct s_vec4		t_vec4;

typedef struct	s_point3
{
	float		x;
	float		y;
	float		z;
}				t_point3;

struct			s_vec3
{
	float		x;
	float		y;
	float		z;
};

typedef struct	s_mat3
{
	double		matrix[3][3];
}				t_mat3;

typedef struct	s_mat4
{
	float		matrix[4][4];
}				t_mat4;

typedef struct	s_p2d
{
	float		x;
	float		y;
}				t_p2d;

struct			s_vec4
{
	float		x;
	float		y;
	float		z;
	float		w;
};

typedef struct	s_quaternion
{
	float		s;
	t_vec3		v;
}				t_quaternion;

t_mat4			ft_mat4_identity_matrix(void);
t_mat4			ft_mat4_zero(void);
t_vec3			ft_mat3_multiply_vec3(t_mat3 matrix, t_vec3 vector);
t_mat4			ft_mat4_multiply_mat4(t_mat4 a, t_mat4 b);
t_mat4			ft_mat4_scalar_multiply(t_mat4 m, double n);
t_mat4			ft_mat4_sum_mat4(t_mat4 a, t_mat4 b);
t_mat4			ft_mat4_translation_matrix(t_vec3 v);
t_mat4			ft_mat4_scale_matrix(double a, double b, double c);
t_point3		ft_mat3_multiply_point3(t_mat3 matrix, t_point3 point);
t_vec3			ft_mat3_multiply_vec3(t_mat3 matrix, t_vec3 vector);
t_mat4			ft_mat4_rotation_matrix(t_vec3 axis, double alpha);
void			ft_mat4_print(t_mat4 mat);
t_mat4			ft_mat4_transpose(t_mat4 mat);
t_mat4			ft_look_at(t_vec3 eye, t_vec3 target, t_vec3 up);
t_vec3			ft_vec3_create(float x, float y, float z);
t_vec3			ft_vec3_sum(t_vec3 a, t_vec3 b);
t_vec3			ft_vec3_substract(t_vec3 a, t_vec3 b);
float			ft_vec3_dot_multiply(t_vec3 a, t_vec3 b);
t_vec3			ft_vec3_scalar_multiply(t_vec3 a, float b);
t_vec3			ft_vec3_cross_multiply(t_vec3 a, t_vec3 b);
float			ft_vec3_norm(t_vec3 vect);
t_vec3			ft_vec3_normalize(t_vec3 vect);
float			ft_vec3_projection(t_vec3 a, t_vec3 b);
t_vec3			ft_vec3_neg(t_vec3 vect);
float			deg_to_rad(float deg);
#endif
