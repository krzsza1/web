#include"loadfile.h"
#include<stdio.h>

int loadfile( char *fn, double v[], int max){
	FILE *in = fopen( fn, "r");// r oznacza, że będziesz czytał, rb - -czytasz plik binarny, "w" do pisania - niszczysz starą, "a" dopisujesz do poprzedniej zawartośc
	if ( in == NULL )
		return -2*max;
	int n= 0; // infomacja o tym ile liczb zostało przeczytanych
	double x;
	while( fscanf( in,  "%lf" , &v[n] ) == 1 ){ // in pokazuje gdzie będziemy używać plik, czy chuj wie// & wskazuje adres elementu, dopóki uda jej się do odczytać /* lf long float, v od n przekaże kopie wartości do fscanf ?? co to fscanf */
		if( n == max )// ++ można stosować w wielu miejscach,// sprawdzasz czy masz miejsce, jeżeli masz miejsce to zapisze 
			return -(max+1); // zechciej przekazać informację o błędzie //
		else
			v[n++] = x;
	}
	
	fclose(in);
	return n;
}
