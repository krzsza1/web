#include<stdio.h>
#include"insort.h"

int main(){
	double t[] = {1.0, 4.0, -2.0, 3.1};
	insort(t, sizeof t / sizeof *t);
	int i = 0;
	for(;i< sizeof t/ sizeof *t;i++)
		printf("%g\n", t[i]);
	return 0;
}
