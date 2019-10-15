#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool prime(int liczba)
{
	double pom;
	int k = 2;
	pom = sqrt(liczba);
	if(liczba<2)
		return false;
	else if(liczba == 2)
		return true;
	else if(liczba == 3)
		return true;
	else{
		for(; k<=pom; k++){
			if(liczba % k == 0){
				return false;
			}
			else
				continue;
		}
	}
	return true;
}

int tab[100000];
int main()
{
	int n;
	scanf("%d", &n);
	if(n<100000){
		int i = 0;
		for(; i<n; i++){
			scanf("%d", &tab[i]);
		}
		i=0;
		for(; i<n; i++){
			if(prime(tab[i]))
				printf("TAK\n");
			else
				printf("NIE\n");
		}
	}
	else
		return 2;
}
