#include<stdio.h>
// nhap vao mang so thuc va nhap so x bat ki , xem x xuat hien bao nhieu lan
void nhap(double a[], int n){
	
	for(int i = 0; i < n; i++){
		printf("\nNhap a[%d] =", i);
		scanf("%lf", &a[i]);
	}
}
void xuat(int a[], int n){
	for(int i = 0; i < n; i++){
		printf("a[%d]=%d\n", i,a[i]);
	
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	double a[n];
	nhap(a, n);
	double x;
	int count = 0;
	printf("so nhap vao : x =");
	scanf("%lf", &x);
	for(int i = 0 ; i < n; i++){
		if(a[i] == x) count++;
	}
	printf("so lan xuat hien cua x = %d",count);
}
