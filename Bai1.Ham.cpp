#include <stdio.h>
#include <math.h>

long long mu(int x, int y){	
	int i = 1;
	long long kq = 1;
	for(i = 1; i <= y; i++){
		kq *= x ;
	}
	return kq;
}

int main(){
	int x, y;
	printf("Nhap gia tri x: ");
	scanf("%d", &x);
	printf("Nhap gia tri y: ");
	scanf("%d", &y);
	printf("Gia tri x^y la: %lld", mu(x, y));
	return 0;
}

