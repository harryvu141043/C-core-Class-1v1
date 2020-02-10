#include<stdio.h>
//in ra vt va phan tu lon nhat trong mang
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
	int n; 
	scanf("%d", &n);
	int a[n];
	nhap(a, n);
	int vt = 0;
	for( int i = 1; i < n; i++){
		if(a[i] > a[vt]){
			vt = i;
		} 
	}
	printf("%d - %d", vt,a[vt]);
}
