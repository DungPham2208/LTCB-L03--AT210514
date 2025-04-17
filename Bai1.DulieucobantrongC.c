#include <stdio.h>
#include <math.h>

int main()
{
	double x;
	printf("Nhap mot gia tri bat ky cho x: ");
	scanf("%lf", &x);
	double a = x * x;
	double b = x * x * x;
	double c = x * x * x * x;
	printf("Gia tri cua x^2 la: %.2lf\n", a);
	printf("Gia tri cua x^3 la: %.2lf\n", b);
	printf("Gia tri cua x^4 la: %.2lf", c);
	return 0;
}
