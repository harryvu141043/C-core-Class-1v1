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

void phanTuxh2Lan(int a[], int n){
	for(int i = 0 ; i < n-1; i++){
		int count = 1;
		for(int j = i+1; j < n; j++){
			if(a[i] == a[j]){
				count++;
			}
			if(count>2){
				break;
			}
		}
		if(count == 2){
			printf("%d\n", a[i]);
		}
	}
}

int main(){
	int a[100];
	int n;
	nhap(a, n);
	phanTuxh2Lan(a, n);

}
