#include "vector.h"

t_vect_data	mag_vect(t_vect a)
{
	return (sqrt(magsqr_vect(a)));
}

t_vect_data	magsqr_vect(t_vect a){
	t_vect_data t;
	int x;

	t = 0;
	x = 0;
	while(x < VECT_LEN){
		t += a[x] * a[x]; 
		x++;
	}
	return t;
}

t_vect		*unit_vect(t_vect a)
{
	t_vect_data mag;
	t_vect *ret;
	int x;

	mag = mag_vect(a);
	return (scale_vect(a, 1 / mag));
}