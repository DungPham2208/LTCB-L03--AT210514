#include <stdio.h>
#include <math.h>

int main(){
	int a;
	printf("Uoc chung cua ");
	scanf("%d", &a);
	int i = 1;
	for(i = 1; i <= a; i++){
		if(a % i == 0) printf("%d ", i);
	}
	return 0;
}
