#include <stdio.h>
#include <math.h>

int main(){
	printf("Cac so duong chan tu 1 den 20 la: ");
	int i = 1;
	for(i = 1; i <= 20; i++){
		if(i % 2 == 0) printf("%d	", i);
	}
	return 0;
}
