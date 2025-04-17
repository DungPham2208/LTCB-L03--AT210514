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
	
	int j = 1;
	int max = a[0];
	int indexmax = j;
	for(j = 1; j < n; j++){
		if(a[j] > max){
			max = a[j];
			indexmax = j;
		}
	}
	printf("Phan tu lon nhat trong mang co gia tri la: %d\n", max);
	printf("Va no la phan tu thu %d cua mang\n", indexmax + 1);
	
	int k;
	int min = a[0];
	int indexmin = k;
	for(k = (n - 1); k >= 0; k--){
		if(a[k] < min){
			min = a[k];
			indexmin = k;
		}
	}
	printf("Phan tu be nhat trong mang co gia tri la: %d\n", min);
	printf("Va no la phan tu thu %d cua mang", indexmin + 1);
	return 0;
}
