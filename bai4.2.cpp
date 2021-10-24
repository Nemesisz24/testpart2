#include<stdio.h>
#include<string.h>
#define max 50
void nhapmang(int *m,int n){
	int i;
	for (i=0;i<n;i++){
		printf("Nhap phan tu thu %d:",i+1);
		scanf("%d",m+i);
	}
	for (i=0;i<n;i++){
		printf("Phan tu thu %d la %d",i+1,*(m+i));
		printf("\n");
	}
}
int main()
{
	int n,A[max],B[max],x,i;
	int *m=A;	
	printf("Nhap so phan tu A :");scanf("%d",&n);
	printf("Nhap so phan tu B: ");scanf("%d",&x);
	nhapmang(m,n);
	m=B;
	nhapmang(m,x);
	printf("Mang A khi in nguoc la:");
	for (i=0;i<n;i++){
		printf("%3d",A[n-i-1]);
	}
	return 0;
}
