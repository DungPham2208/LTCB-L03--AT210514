#include <stdio.h>

int fibonacci(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    else return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    int n;
    printf("Nhap n de tinh phan tu trong day Fibonacci: ");
    scanf("%d", &n);
    printf("Gia tri Fibonacci(%d) = %d\n", n, fibonacci(n));
    return 0;
}

