#include <stdio.h>
#include <stdlib.h>

int main() {
	float a,b,h,c;
	char dv;
	
	printf("ban muon tinh dien tich hinh thang! \n");
	
	printf("\n nhap don vi do: ");
	scanf("%c",&dv);
	fflush(stdin); 
	printf("\n nhap do dai day nho: ");
	scanf("%f",&a);
	printf("\n nhap do dai day lon: ");
	scanf("%f",&b);
	printf("\n nhap do dai chieu cao: ");
	scanf("%f",&h);
	
	c=h*(a+b)/2;
	
	printf ("\n dien tich hinh thang la : %f %c^2",c,dv);
	return 0;
}
