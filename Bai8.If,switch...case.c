#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	printf("Nhap lan luot 3 canh cua tam giac: ");
	scanf("%d %d %d", &a, &b, &c);
	if( (a < b + c) && (b < a + c) && (c < a + b) )
	{
		if((a * a == b * b + c * c) || ( b * b == a * a + c * c) || (c * c == a * a + b * b)){
			if((b == c) || (a = c) || (a == b))
				printf("Day la mot tam giac vuong can");
			else{
				printf("Day la mot tam giac vuong");
			}
					
		}
		else if((a == b) && (b == c)){
			printf("Day la mot tam giac deu");
		}
    	else if((a == b) || (b == c) || (a == c)){
    		printf("Day la mot tam giac can");
		}
		else{
			printf("Day la mot tam giac thuong");
		}			
	}
	else{
		printf("Day khong phai la mot tam giac");
	}			 
	return 0;
}
