#include <stdio.h>
#include <stdlib.h>

int main() {
	float r,c,v,a,b;
	char dv;
	printf ("Ban muon tinh dien tich va chu vi hinh tron! \n");
	printf ("Hay nhap don vi do:");
	scanf  ("%c",&dv);
	fflush(stdin);
	printf ("\n Hay nhap ban kinh:");
	scanf  ("%f",&r);
	c=2*r*3.14;
	v=r*r*3.14; 
	printf ("\n chu vi hinh tron: %f %c",c,dv);
	printf ("\n dien tich hinh tron: %f %c^2 \n",v,dv);
	fflush(stdin);
	printf ("\n Ban muon tinh dien tich va chu vi hinh chu nhat");
	printf ("\n Hay nhap don vi do:");
	scanf  ("%c",&dv);
	printf ("\n Hay nhap do dai canh 1:");
	scanf  ("%f",&a);
	printf ("\n Hay nhap do dai canh 1:");
	scanf  ("%f",&b);
	c=(a+b)*2;
	v=a*b;
	printf ("\n chu vi hinh chu nhat: %f %c",c,dv);
	printf ("\n dien tich hinh chu nhat: %f %c^2 \n",v,dv);
	return 0;
}
