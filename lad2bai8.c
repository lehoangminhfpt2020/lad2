#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("/*======= Kich thuoc cua cac kieu du lieu =======*/  \n ");
	
	printf(" kieu int: %d Byte",sizeof(int));
	printf("\n So nguyen: 15");
	printf("\n kieu float: %d Byte",sizeof(float));
	printf("\n so thuc kieu float: 3.345345");
	printf("\n kieu double: %d Byte",sizeof(double));
	printf("\n so thuc kieu double: 3.78649784659786");
	printf("\n kieu long int: %d Byte",sizeof(long int));
	printf("\n kieu long double : %d Byte \n",sizeof(long double));
	printf ("/*==============================================*/");
	return 0;
}
