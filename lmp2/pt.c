#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
	int n = argc > 1 ? atoi(argv[1]) : 10;
	FILE *out = argc > 2 ? fopen(argv[2], "a") : stdout;
	for(int i = 0; i<atoi(argv[1]); i++)
		fprintf(out, "%d\t",i);

	return 0;
}
