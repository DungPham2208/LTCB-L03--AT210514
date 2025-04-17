#include <stdio.h>

int giaithua(int n){
    if (n == 0 || n == 1) return 1;		    
    else return n * giaithua(n - 1);        
}

int main(){
    int n;
    printf("Nhap gia tri cua n de tinh giai thua: ");
    scanf("%d", &n);
    printf("%d! = %d\n", n, giaithua(n));
	return 0;
}

