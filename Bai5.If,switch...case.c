#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c;
	printf("Nhap lan luot 3 so a, b, c vao phuong trinh bac 2 co dang ax^2 + bx + c = 0 : ");
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("Phuong trinh co dang: %lfx^2 + %lfx + %lf = 0\n", a, b, c);
	double delta = b * b - 4 * a * c;
	if(delta < 0){
		printf("Phuong trinh vo nghiem !");		
	}
	else if(delta == 0){
		printf("Phuong trinh co nghiem kep la: x1 = x2= %.2lf", -b/(2*a));
	}
	else if(delta > 0){
 		double x1 = (-b+sqrt(delta))/(2*a);
 		double x2 = (-b-sqrt(delta))/(2*a);
		printf("Phuong trinh co 2 nghiem phan biet la:\n");
		printf("x1 = %.2lf va x2 = %.2lf", x1, x2);
	}
	return 0;
}
