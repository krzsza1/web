#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 49
#define MIN 1
#define ILE 7


int my_random(int min, int max){
	// zwraca losową liczbę <min,max>
	return min + rand() % (max-min+1);
	} 
void insort( int v[], int n ) {
	for ( int i = 1; i < n; i++ ){
		int tmp = v[i];
		int j = i;
		for( ; j > 0 && v[j-1] > tmp; j-- )
			v[j] = v[j-1];
		v[j] = tmp;
	}
}


int main( int argc, char* argv[]){
	int t[MAX-MIN+1]; /* wartości tablicy wskazują, czy odp. liczba ( indeks) została wylosowana*/
	int ile = argc > 1 ? atoi( argv[1] ) : ILE);
	for( int i= 0; i < MAX-MIN+1; i++ )
		t[i] = 0; // zerujemy --> nic nie zostało wylosowane
	srand ( time (NULL) );
	int n = 0;
	while (n < ile) {
		int k = my_random ( MIN, MAX );
		if( t[k-MIN] == 0 ) {
			t[k-MIN] =1; // 1 oznacza, że wylosowaliśmy k = MIN+indeks
			n++;
		}
	}
	for( int i = 0; i < MAX - MIN+1; i++ )
		if( t[i] == 1)
	printf ("%d ", t[i] );

	printf("\n");
	return 0 ;
}
