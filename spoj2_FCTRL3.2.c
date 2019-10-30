#include<stdio.h>

int fact(int a){
	int j= 1;
	unsigned long int tmp= 1;
	if(a == 0 || a ==1)
		return 1;
	else{
		for(;j<=a;j++){
			tmp = tmp*j;
		}
		return tmp % 100;
	}
}

int main(){
	int D;
	int tab[30];
	scanf("%d", &D);
	if(D<=30 && D>=1){
		int i= 0;
		for(;i<D;i++){
			scanf("%d", &tab[i]);
		}
		i= 0;
		for(;i<D;i++){
			if(tab[i]>9)
				printf("0 0\n");
			else{
				printf("%d %d\n", (fact(tab[i])-fact(tab[i])%10)/10, fact(tab[i])%10);
			}
			
		}
	}
	return 0;
}
