#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 49
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


int main(){
	int t[ILE];
	srand ( time (NULL) );
	for( int i = 0; i < ILE; i++){
		t[i] = my_random( 1, MAX);
	}
	insort( t, ILE );
	for( int i= 0; i < ILE; i++ ) {
		printf ("%d ", t[i] );
	} 
	printf("\n");
	return 0 ;
}
