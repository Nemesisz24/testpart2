#include<stdio.h>
#define PI 3.14
int main()
{
	float r;
	printf("Nhap vao ban kinh hinh tron:");
	scanf("%f",&r);
	printf("Dien tich va chu vi hinh tron lan luot la: %f va %f\n",2*PI*r,PI*r*r);
	
	printf("Dien tich mat cau va khoi cau tuong ung la: %f va %f:",4*PI*r*r,4/3*PI*r*r);
	
	
}
