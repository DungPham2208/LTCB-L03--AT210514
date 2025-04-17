#include <stdio.h>

int tong1(int a[], int n){
	int i = 0;
	int tong = 0;
	for(i = 0; i < n; i++){
		tong += a[i];
	}
	return tong;
}

int tongduong1(int a[], int n){
	int i = 0;
	int tongduong = 0;
	for(i = 0; i < n; i++){
		if(a[i] > 0) tongduong += a[i];
	}
	return tongduong;
}

int tongam1(int a[] ,int n){
	int i = 0;
	int tongam = 0;
	for(i = 0; i < n; i++){
		if(a[i] < 0) tongam += a[i];
	}
	return tongam;
}

int demduong(int a[], int n) {
	int i = 0;
	int dem = 0;
	for (i = 0; i < n; i++) {
		if (a[i] > 0) dem++;
	}
	return dem;
}

int demam(int a[], int n) {
	int i = 0;
	int dem = 0;
	for (i = 0; i < n; i++) {
		if (a[i] < 0) dem++;
	}
	return dem;
}

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
	
	int tong = tong1(a, n);
	int tongduong = tongduong1(a, n);
	int tongam = tongam1(a, n);
	int sosoduong = demduong(a, n);
	int sosoam = demam(a, n);
	
	
	printf("Tong cua cac so trong mang la: %d\n", tong);
	printf("Tong cua cac so nguyen duong trong mang la: %d\n", tongduong);
	printf("Tong cua cac so nguyen am trong mang la: %d\n", tongam);	
	printf("Trung binh cong cua cac so trong mang la: %.2lf\n", (double)tong / n);
	if (sosoduong > 0)
		printf("Trung binh cong cua cac so nguyen duong: %.2lf\n", (double)tongduong / sosoduong);
	else
		printf("Khong co so nguyen duong trong mang\n");

	if (sosoam > 0)
		printf("Trung binh cong cua cac so nguyen am: %.2lf\n", (double)tongam / sosoam);
	else
		printf("Khong co so nguyen am trong mang");
	return 0;
}
