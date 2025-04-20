#include <stdio.h>

int main(){
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
	int i;
	int *x;
	for(i = 0, x = a; x < a + n; x++, i++){
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", x);
    }
    printf("Mang co dang:\n");
    for(x = a; x < a + n; x++){
        printf("%d ", *x);
    }
    printf("\n");
    int max = *a;
    for(x = a + 1; x < a + n; x++){
        if (*x > max) max = *x;
    }
    int min = *a;
	for(x = a + 1; x < a + n; x++){
        if (*x < min) min = *x;
    }
    printf("Gia tri lon nhat trong mang la: %d\n", max);
	printf("Gia tri nho nhat trong mang la: %d", min);
    return 0;
}

