#include <stdio.h>

int main(){
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i;
	printf("Mang co dang:\n");
	for(i = 0; i < 10; i++){
		printf("%d ", *(a + i));
	}
	return 0;
}
