#include "vector.h"

t_vect	*create_vect(float x, float y, float z)
{
	t_vect *ret = ft_memalloc(sizeof(t_vect));
	(*ret)[0] = x;
	(*ret)[1] = y;
	(*ret)[2] = z;
	return (ret);
}

t_vect	*sum_vect(t_vect a, t_vect b)
{
	int x;
	t_vect *ret;

	x = 0;
	ret = EMPTY_VECT;
	while(x < VECT_LEN)
	{
		(*ret)[x] = a[x] + b[x];
		x++;
	}
	return (ret);
}

t_vect	*sub_vect(t_vect a, t_vect b)
{
	int x;
	t_vect *ret;

	x = 0;
	ret = EMPTY_VECT;
	while(x < VECT_LEN)
	{
		(*ret)[x] = a[x] - b[x];
		x++;
	}
	return (ret);
}

t_vect	*cross_vect(t_vect a, t_vect b)
{

}

t_vect	*scale_vect(t_vect a, t_vect_data scale){
	t_vect *ret;
	int x;
	
	ret = EMPTY_VECT;
	x = 0;
	while(x < VECT_LEN)
	{
		(*ret)[x] = a[x] * scale;
		x++;
	}
	return (ret);
}