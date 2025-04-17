#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf("Nhap gia tri cua n: ");
	scanf("%d", &n);
	double tong = 0;
	int i = 1;
	for(i = 1; i <= n; i++){
		tong += (double) 1 / i;
	}
	printf("Tong cua day so la: %.2lf", tong);
	return 0;
}
