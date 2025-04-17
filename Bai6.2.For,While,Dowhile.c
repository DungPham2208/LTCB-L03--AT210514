#include <stdio.h>
#include <math.h>

int main(){
	int a;
	printf("Nhap so nguyen duong bat ki: ");
	scanf("%d", &a);
	int tong = 0;
	int i = 1;
	for(i = 1; i <= a; i++){
		if(a % i == 0)
			tong += i;
	}
	if(tong == (2 * a))	printf("Day la mot so hoan hao");
	else printf("Day khong phai la mot so hoan hao");
	return 0;		
}

