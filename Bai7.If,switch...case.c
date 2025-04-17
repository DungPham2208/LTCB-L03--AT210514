#include <stdio.h>

int main()
{
	float a;
	printf("Nhap mot diem so bat ki: ");
	scanf("%f", &a);
	if(a<5){
		printf("Xep loai: Yeu");
	}
	else if((a >= 5) && (a < 7)){
		printf("Xep loai: TB");
	}
	else if((a >= 7) && (a < 8)){
		printf("Xep loai: Kha");		
	}
	else if((a >= 8) && (a < 9)){
		printf("Xep loai: Gioi");
	}
	else if(a >= 9){
		printf("Xep loai: Xuat sac");
	}
	return 0;
}
