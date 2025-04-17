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
	int x;
	printf("Nhap gia tri cua phan tu can dem: ");
	scanf("%d", &x);
	int soluong = 0;
	for(i = 0; i < n; i++){
		if(a[i] == x) soluong += 1;
	}
	printf("Phan tu %d xuat hien %d lan", x, soluong);	
    return 0;
}

