#include "avg.h"

double avg( double v[], int n ) {
	double sum = 0.0;
	int p = n == 0 ? 1 : n;

	while( n-- > 0 )
		sum += v[n];

	return sum / p;
}
