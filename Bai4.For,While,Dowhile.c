#include <stdio.h>
#include <math.h>

int main(){
	int i;
	int tong = 0;	
	for(i = 1; i <= 100; i += 2){
		tong += i;
	}
	printf("Tong cac so le tu 1 den 100 la: %d", tong);
	return 0;
}
