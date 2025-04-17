#include <stdio.h>


int giaithua(int m){
	int i = 1;
	int tich = 1;
	for(i = 1; i <= m; i++){
		tich *= i;
	}
	return tich;
}
int main(){
	int n;
	printf("Nhap gia tri cua n: ");
	scanf("%d", &n);
	int j = 1;
	double tong = 0;
	for(j = 1; j <= n; j++){
		tong += (double) 1/(giaithua(j));
	}
	printf("Gia tri cua S la: %.2lf", tong);
	return 0;
}
