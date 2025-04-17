#include <stdio.h>
#include <math.h>

int main()
{
	int a, b;
	printf("Nhap gia tri cua a: ");
	scanf("%d", &a);
	printf("Nhap gia tri cua b: ");
	scanf("%d", &b);
	int Tong = a + b;
	int Hieu = a - b;
	int Tich = a * b;
	int Thuong = a / b;
	printf("Tong: %d\n", Tong);
	printf("Hieu: %d\n", Hieu);
	printf("Tich: %d\n", Tich);
	printf("Thuong: %d", Thuong);
	return 0;	
}
