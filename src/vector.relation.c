#include "vector.h"

t_vect_data	dot_vect(t_vect a, t_vect b){
	t_vect_data ret;
	int v;

	v = 0;
	ret = 0;
	while(v < VECT_LEN)
	{
		ret += a[v] * b[v];
		v++;
	}
	return (ret);
}

t_vect		*transition_vect(t_vect a, t_vect b, t_vect_data steps,
							void(*on_step)(t_vect, float))
{
	int			c;
	int			t;
	t_vect_data	per;
	t_vect		*result_vect;

	c = 0;
	result_vect = vect_clone(a);
	while(c <= steps)
	{
		per = c / steps;
		t = 0;
		while(t < VECT_LEN)
		{
			(*result_vect)[t] = a[t] - (b[t] * per);
			t++;
		}
		on_step(*result_vect, per);
		c++;
	}
	return (result_vect);
}