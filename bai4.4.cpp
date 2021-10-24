#include<stdio.h>
int main()
{
	int A[]={1,2,3,4,5,6,7,8};
	int *n=NULL;
	n=A;
	printf("dia chi mang: %p\n",n);
	printf("Dia chi mang 2: %p",&A);
	return 0;
}
