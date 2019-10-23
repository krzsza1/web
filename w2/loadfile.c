#include "loadfile.h"
#include <stdio.h>

int loadfile( char *fn, double v[], int max ) {
	FILE *in = fopen( fn, "r" );
	if( in == NULL )
		return -2*max;
	int n= 0;
	double x;
	while( fscanf( in, "%lf", &x ) == 1 ) {
		if( n == max ) {
			return -(max+1);
		} else {
			v[n] = x;
			n++;
		}
	}

	fclose( in );
	return n;
}
