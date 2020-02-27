#include<stdio.h>
void nhap(int a[], int n){
	
	for(int i = 0; i < n; i++){
		printf("\nNhap a[%d] =", i);
		scanf("%d", &a[i]);
	}
}
void xuat(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("a[%d]=%d\n", i,a[i]);
	
	}
}

int main()
{
	printf("\nNhap n =");
	int n;
	scanf("%d", &n);
	int a[n];
	nhap(a, n);
	
}
