#include<stdio.h>
void nhap(int a[], int &n)
{
	printf("nhap n = ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		printf("\nnhap a[%d]", i+1);
		scanf("%d", &a[i]);
	}
}

void xuat(int a[], int n)
{
	for(int i = 0; i < n; i++){
		printf("%5d", a[i]);
		printf("\n");
	}
}

void tangDan(int a[], int n)
{
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
void phanTuXuatHien1Lan(int a[], int n){
	int s=a[0];
	if(s!=a[1]&&n>1)
	{
		printf("%d",a[0]);
	}
	printf("value s la:%d\n",s);
	for(int i = 1; i < n; i++){
		if(a[i] != a[i+1]&&a[i]!=s){
			printf("%d\n", a[i]);
		}
		else{
			s=a[i];	
		}
		
		
	}
}
int main(){
	int a[100];
	int n;
	nhap(a, n);
	tangDan(a, n);
	xuat(a,n);
	phanTuXuatHien1Lan(a, n);

}
