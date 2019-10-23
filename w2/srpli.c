#include "avg.h"
#include "loadfile.h"
#include <stdio.h>

int main( int argc, char **argv ) {
	if( argc > 1 ) {
		double t[MAX];
		int n = loadfile( argv[1], t, MAX );
		if( n == -2*MAX ) {
			fprintf( stderr, "%s: nie mogę otworzyć pliku %s do czytania\n", argv[0], argv[1] );
			return 2;
		} else if( n == -MAX-1 ) {
			fprintf( stderr, "%s: plik %s zawiera zbyt wiele (>%d) liczb\n", argv[0], argv[1], MAX );
			return 3;
		}
		printf( "srednia z pliku %s = %g\n",
				argv[1], avg( t, n ) );
		return 0;
	} else {
		fprintf( stderr, "%s: musisz podać nazwę pliku!\n", argv[0] );
		return 1;
	}
}
