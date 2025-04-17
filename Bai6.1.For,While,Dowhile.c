#include <stdio.h>

int main(){
	int a, b, x, y;
	printf("Nhap so nguyen thu nhat: ");
	scanf("%d", &a);
	printf("Nhap so nguyen thu hai: ");
	scanf("%d", &b);
	for(x = b; x >= 0; x++){
		if(x % a == 0 && x % b == 0){
			printf("Boi chung nho nhat cua 2 so nguyen la: %d\n", x);
			break;
		}
	}
	for(y = b; y >= 1; y--){
		if(a % y == 0 && b % y == 0){
			printf("Uoc chung lon nhat cua 2 so nguyen la: %d", y);
			break;
		}
	}
	return 0;
}
