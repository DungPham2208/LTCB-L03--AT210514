#include <stdio.h>

int main(){

    int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	int a[n];
	int i = 0;
	for(i = 0; i < n; i++){
		printf("Nhap phan tu thu %d: ", i + 1);
		scanf("%d", &a[i]);
	}
	printf("Mang co dang: ");
	for(i = 0; i < n; i++){
		if(a[i] < 0) a[i] = 0;
		printf("%d ", a[i]);
	}
	return 0;
}
	
