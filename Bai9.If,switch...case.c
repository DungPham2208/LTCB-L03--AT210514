#include <stdio.h>
#include <math.h>

int main()
{
	int a, b;
	printf("Nhap vao nam va thang: ");
	scanf("%d%d", &a, &b);
	if((a % 400) == 0 || ((a % 4) == 0 && (a % 100) != 0))
	{
		if(b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
			printf("Thang %d nam %d co 31 ngay", b, a);
		else if(b == 4 || b == 6 || b == 9 || b == 11)
			printf("Thang %d nam %d co 30 ngay", b, a);
		else if(b == 2)
			printf("Thang %d nam %d co 29 ngay", b, a);		
	}
	else
	{
		if(b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
			printf("Thang %d nam %d co 31 ngay", b, a);
		else if(b == 4 || b == 6 || b == 9 || b == 11)
			printf("Thang %d nam %d co 30 ngay", b, a);
		else if(b == 2)
			printf("Thang %d nam %d co 28 ngay", b, a);	
	}
	return 0;
}
