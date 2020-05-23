#include <stdio.h>
#include <stdlib.h>

int main() {
	float a,b,c,d;
	printf("nhap diem mon toan:");
	scanf ("%f",&a);
	printf("nhap diem mon hoa:");
	scanf ("%f",&b);
	printf("nhap diem mon ly:");
	scanf ("%f",&c);
	
	d=(a+b+c)/3;
	printf("tong diem trung binh ba mon la: %f ",d);
	return 0;
}
