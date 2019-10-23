#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( int argc, char **argv ) {
	int n = argc > 1 ? atof(argv[1]) : 10;
	FILE *out = argc > 2 ? fopen( argv[2], "w" ) : stdout;

	srand( time(NULL) );

	for( int i= 0; i < n; i++ )
		fprintf( out, "%d\n", rand() );

	fclose( out );
	printf("%d", RAND_MAX);

	return 0;
}
