#include<stdio.h>
// dem so le va chan trong mang
void nhap(int a[], int n)
{
	for(int i = 0; i < n; i++){
		printf("\n a[%d]", i);
		scanf("%d", &a[i]);
	}
}


int main(){
	int n;
	printf("nhap n = ");
	scanf("%d", &n);
	int a[n];
	nhap(a, n);
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(a[i]%2==0){
			dem++;
		}
	}
	printf("cac so chan co trong mang = %d\n", dem);
	int count = n - dem ;
	printf("cac so le co trong mang = %d", count);
}
