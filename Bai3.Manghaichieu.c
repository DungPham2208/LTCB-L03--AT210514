#include <stdio.h>

void tich(int a[][100], int b[][100], int c[][100], int n, int m, int p){
	int i, j, k;
	for(i = 0; i < n; i++){
        for(j = 0; j < p; j++){
            c[i][j] = 0;
			for(k = 0; k < m; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
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
	int n, m, p;
	printf("Nhap so luong hang va cot cua ma tran 1: ");
	scanf("%d %d", &n, &m);
	int a[100][100];
	nhap(a, n, m);
	in(a, n, m);
	printf("Nhap so luong hang va cot cua ma tran 2: ");
	scanf("%d %d", &m, &p);
	int b[100][100];
	nhap(b, m, p);
	in(b, m, p);
	int c[100][100];
	printf("Tich cua 2 ma tran la:\n");
	tich(a, b, c, n, m, p);
	in(c, n, p);
	return 0;	
}
