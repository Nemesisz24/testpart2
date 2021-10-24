#include<stdio.h>
int main()
{
	char z[12];
	printf ("Nhap vao chuoi:");
	scanf("%[^abcd123]",z);
	printf("Chuoi sau xu li la:\"%s\"\n",z);
	return 0;
	
}
