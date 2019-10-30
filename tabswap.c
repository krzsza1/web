#include<stdio.h>

int main(){
	char tab[] = { 1, 2, 3, 4, 5, 6, 7, 8};
	char tab2[8];
	char *t, *p;
	int i = 0;
	for(; i < (sizeof tab / sizeof *tab); i+=2){
		t = &tab[i];
		p = &tab[i+1];
		tab2[i] = *p;
		tab2[i+1] = *t;
	}
	i = 0;
	for(;i < (sizeof tab2 / sizeof *tab2); i++)
		printf("%d ", tab2[i]);

	return 0;
	
}
