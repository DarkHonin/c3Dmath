#include "vector.h"

t_vect	*vect_clone(t_vect a)
{
	t_vect	*ret;
	int		i;

	ret = (t_vect *)ft_memalloc(sizeof(t_vect));
	i = 0;
	while(i < VECT_LEN)
	{
		(*ret)[i] = a[i];
		i++;
	}
	return (ret);
}