#include "avg.h"
#include <stdio.h>

int main() {
	double t[] = { 1, 2, 3, 4, 5, 5.25 };

	int l = 6;

	double w = avg( t, l );

	printf( "dlugosc=%d srednia=%g\n", l, w );

	return 0;
}
