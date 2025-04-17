#include <stdio.h>

void tong(int a[][100], int b[][100], int c[][100], int n, int m){
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}

void nhap(int a[][100], int n, int m){
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("Nhap gia tri cho phan tu hang %d, cot %d: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void in(int a[][100], int n, int m){
	printf("Ma tran co dang\n");
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");	
	}	
}

int main(){
	int n, m;
	printf("Nhap so luong hang va cot cua 2 ma tran: ");
	scanf("%d %d", &n, &m);
	int a[100][100];
	printf("Nhap gia tri cho ma tran 1\n");
	nhap(a, n, m);
	in(a, n, m);
	int b[100][100];
	printf("Nhap gia tri cho ma tran 2\n");
	nhap(b, n, m);
	in(b, n, m);
	int c[100][100];
	int i, j;
	tong(a, b, c, n, m);
	printf("Tong hai ma tran:\n");
	in(c, n, m);
	return 0;
}



	
