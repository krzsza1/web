#include "avg.h"
#include <stdio.h>

int main() {
	double t[] = { 1, 2, 3, 4, 5 }; // zostanie wykonana promocja do typu double

	double w = avg( t, 5); // wypisze 5 elementow

	printf(" srednia=%g\n", w); // jeśli dasz g, to temat nie pójdzie jeśli zmienisz na procent f, to pójdzie, funkcja print może być wywołana z 1 argumentem, może być wywołana z 50 argumentami 
	
	return 0;
}
