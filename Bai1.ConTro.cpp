#include <stdio.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int a = 1, b = 2;
	swap(&a, &b);
	printf("Gia tri a va b sau khi doi cho lan luot la %d, %d", a, b);
	return 0;
}
