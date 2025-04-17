#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf("Nhap gia tri cua n de tinh giai thua cua no: ");
	scanf("%d", &n);
	int i = 1;
	int tich = 1;
	for(i = 1; i <= n; i++){
		tich *= i;
	}
	printf("Ket qua la: %d", tich);
	return 0;
}
