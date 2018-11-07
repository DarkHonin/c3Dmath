#include "vector.h"
#include "stdio.h"

void print_vect(t_vect a){
	printf("Vector: [");
	for(int i = 0; i < VECT_LEN; i++)
		if(i != 0)
			printf("; %f ", a[i]);
		else
			printf(" %f ", a[i]);
	printf("]\n");
}

void step(t_vect q, float c){
	printf("%f || ", c);
	print_vect(q);
}

int main(void){
	t_vect a = {2, 3, 2};
	t_vect b = {-2, 8, 3.5};
	print_vect(a);
	print_vect(b);
	printf("--------------suM of vects------------\n");
	t_vect *c = sum_vect(a, b);
	print_vect(*c);
	free(c);
	printf("--------------suB of vects------------\n");
	c = sub_vect(a, b);
	print_vect(*c);
	free(c);
	printf("--------------len of vect------------\n");
	printf("%f\n", mag_vect(a));
	printf("--------------unit of vect------------\n");
	t_vect *hold = unit_vect(a);
	print_vect(*hold);
	printf("%f\n", mag_vect(*hold));
	printf("--------------dot of vect------------\n");
	t_vect A = {1, 1, 1};
	t_vect B = {1, 1, 1};
	printf("a ^ b : %f\n", dot_vect(A, B));
	t_vect C = {0.5, -1, 0.5};
	printf("a -> b : %f\n", dot_vect(A, C));
	t_vect D = {-1, -1, -1};
	printf("a v b : %f\n", dot_vect(A, D));
	printf("--------------graph of vect------------\n");
	transition_vect((t_vect){1, 1, 1}, (t_vect){1, 2, 1}, 10, &step);


}