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
	int j = 0;
	for (i = 0; i < n - 1; i++) {
    	for (j = 0; j < n - i - 1; j++) {
        	if (a[j] > a[j + 1]) {
            	int k = a[j];
            	a[j] = a[j + 1];
            	a[j + 1] = k;
        	}
    	}
	}		
	printf("Mang sau khi sap xep cac phan tu tang dan la: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
	return 0;
}

