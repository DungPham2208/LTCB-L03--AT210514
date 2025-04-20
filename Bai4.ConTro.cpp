#include <stdio.h>

int main() {
    int n;
    int *x, *y;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    int i;
    for(i = 0, x = a; x < a + n; x++, i++){
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", x);
    }	
    for(x = a; x < a + n - 1; x++){
        for(y = x + 1; y < a + n; y++){
            if(*x > *y){
                int temp = *x;
                *x = *y;
                *y = temp;
            }
        }
    }
    printf("Mang sau khi sap xep tang dan co dang:\n");
    for(x = a; x < a + n; x++){
        printf("%d ", *x);
    }
    return 0;
}

