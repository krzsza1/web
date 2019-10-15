#include "avg.h"

double avg(double v[], int n){
	double sum = 0.0;
	int p = n == 0 ? 1 :n; //
	for( int i= 0l i<n; i++ )
		sum += v[i];

	while ( n-- > 0) // n-- najpierw użyj, potem zmniejsz
		sum += v[n];

	return sum / p;
}
