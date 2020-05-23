#include <stdio.h>
#include <stdlib.h>


int main() {
	int a,b,c,d,e;
	double f;
	printf("nhap so dau tien: ");
	scanf ("%d",&a);
	printf("nhap so thu hai: ");
	scanf ("%d",&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=(float)a/(float)b;
	
	printf("tong hai so : %d \n",c);
	printf("hieu hai so : %d \n",d);
	printf("tich hai so : %d \n",e);
	printf("thuong hai so: %f \n",f);
	return 0;
}
