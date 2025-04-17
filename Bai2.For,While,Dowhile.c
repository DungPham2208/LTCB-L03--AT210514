#include <stdio.h>
#include <math.h>

int main(){
	int a;
	printf("Nhap mot so bat ki: ");
	scanf("%d", &a);	
	int i;
	int b = 0;
	for(i = 1; i <= a; i++){
		if(a % i == 0) b++;			
	}
	if(b == 2) printf("Day la so nguyen to");
	else printf("Day khong phai la so nguyen to");
	return 0;		
}
	

