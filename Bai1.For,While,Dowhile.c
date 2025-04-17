#include <stdio.h>
#include <math.h>
 
int main(){
	int tong = 0;
	int a;
	int i = 1;
	for( i = 1; i <= 10; i++){
		printf("Nhap so thu %d: ", i);
		scanf("%d", &a);
		tong += a;
	}
	printf("Gia tri tong cac so la: %d", tong);
	return 0;
}

