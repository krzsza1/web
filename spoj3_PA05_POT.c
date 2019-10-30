#include<stdio.h>

int power(int a, int b){
	switch(a%10){
		case(0): return 0;
		case(1): return 1;
		case(5): return 5;
		case(6): return 6;
		case(9):{
			if(b%2 == 0) return 1;
			else return 9;
		}
		case(2):{
			if(b%4 == 0) return 6;
			else if(b%4 == 3) return 8;
			else if(b%4 == 2) return 4;
			else return 2;
		} 
		case(3):{
                        if(b%4 == 0) return 1;
                        else if(b%4 == 3) return 7;
                        else if(b%4 == 2) return 9;
                        else return 3;
                }
		case(7):{
                        if(b%4 == 0) return 1;
                        else if(b%4 == 3) return 3;
                        else if(b%4 == 2) return 9;
                        else return 7;
                }
		case(4):{
			if(b%2 == 0) return 6;
			else return 4;
		}
		case(8):{
                        if(b%4 == 0) return 6;
                        else if(b%4 == 3) return 2;
                        else if(b%4 == 2) return 4;
                        else return 8;
                }
		default: return 11;
	}
}

int main(){
	int D;
	int tab[2][10];
	scanf("%d", &D);
	int j= 0;
	for(;j<D;j++){
		scanf("%d %d", &tab[0][j], &tab[1][j]);
	}
	j= 0;
	for(;j<D;j++){
		printf("%d\n", power(tab[0][j], tab[1][j]));
	}
	return 0;
}
