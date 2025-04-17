#include <stdio.h>

long long fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    long long fn1 = 1, fn2 = 0, fn; //fn1, fn2 be hon fn lan luot 1 va 2 don vi
	int i = 2;
    for (i = 2; i <= n; i++) {
        fn = fn1 + fn2;
        fn2 = fn1;
        fn1 = fn;
    }
    return fn;
}

int main(){
	int N;
	printf("Nhap gia tri cua N: ");
	scanf("%d", &N);
	int kq = fibonacci(N);
	printf("So do la: %lld", kq);
	return 0;
}

