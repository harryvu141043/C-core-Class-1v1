#include<stdio.h>
void nhap(int a[], int &n)
{
	printf("nhap n = ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		printf("a[%d]", i);
		scanf("%d", &a[i]);
	}
}

void xuat(int a[], int n)
{
	for(int i = 0; i < n; i++){
		printf("%5d  ", a[i]);
		printf("\n");
	}
}

void tangDan(int a[], int n){
	int tg = 0;
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(a[i] > a[j]){
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
}

void chen(int a[], int &na, int x){
	if(x > a[na - 1]) a[na] = x;
	else{
		int i = na;
		while(a[i-1] > x && i > 0 ){
			a[i] = a[i-1];
			--i;
		}
		a[i] = x;
	}
	na++;
	xuat(a, na);
}

int main(){
	int a[100], na, x;
	nhap(a, na);
	tangDan(a,na);
	xuat(a,na);
	printf("\nNhap gia tri x: ");
	scanf("%d", &x);
	chen(a, na, x);
	return 0;
}

