#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, d, e, f;
	printf("Ta co he phuong trinh bac nhat 2 an sau:\n");
	printf("ax + by = c\ndx + ey = f\n");
	printf("Nhap lan luot gia tri a, b, c, d, e, f: ");
	scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);
	printf("He phuong trinh co dang: \n%lfx + %lfy = %lf\n%lfx + %lfy = %lf\n", a, b, c, d, e, f);
	
	double D = a*e - b*d;
    double Dx = c*e - b*f;
    double Dy = a*f - c*d;

    if (D == 0) 
	{
        if (Dx == 0 && Dy == 0){		
            printf("He phuong trinh co vo so nghiem\n");
        }
        else{		
            printf("He phuong trinh vo nghiem\n");
		}    
    } else {
        double x = Dx / D;
        double y = Dy / D;
        printf("He phuong trinh co 2 nghiem la: \nx = %.2lf va y = %.2lf", x, y);
    }
    return 0;
}
