#ifndef VECTOR_H
# define VECTOR_H

# include "libft.h"
# include "math.h"

# define VECT_LEN 3
# define EMPTY_VECT create_vect(0, 0, 0);

typedef	double	t_vect_data;
typedef t_vect_data	t_vect[VECT_LEN];

t_vect		*create_vect(float x, float y, float z);
t_vect		*sum_vect(t_vect a, t_vect b);
t_vect		*sub_vect(t_vect a, t_vect b);
t_vect		*cross_vect(t_vect a, t_vect b);
t_vect		*scale_vect(t_vect a, t_vect_data scale);

/*
**	vector.info	
*/
t_vect_data	mag_vect(t_vect a);
t_vect_data	magsqr_vect(t_vect a);
t_vect		*unit_vect(t_vect a);

/*
** vector.relation
*/
t_vect_data	dot_vect(t_vect a, t_vect b);
t_vect		*transition_vect(t_vect a, t_vect b, t_vect_data steps,
							void(*on_step)(t_vect, float));

/*
**	vector.util
*/

t_vect		*vect_clone(t_vect a);

#endif