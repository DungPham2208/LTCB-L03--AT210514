#include <stdio.h>

int main(){
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	printf("Mang so nguyen gom 10 phan tu:\n");
	int i = 0;
	for(i = 0; i < 10; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("Mang so nguyen gom 10 phan tu in theo chieu nguoc:\n");
	for(i = 9; i >= 0; i--){
		printf("%d ", a[i]);
	}
	return 0;	
}
