#include <stdio.h>
#include <math.h>

int main()
{
	double R;
	printf("Nhap vao ban kinh hinh cau: ");
	scanf("%lf", &R);
	double a = 4 * M_PI * R * R;
	double b = (4/3) * M_PI * R * R * R;
	printf("Dien tich cua hinh cau la: %.2lf\n", a);
	printf("The tich cua hinh cau la: %.2lf", b);
	return 0;	
}
