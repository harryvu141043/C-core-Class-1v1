#include<stdio.h>
#include<math.h>
void nhap(int a[], int n)
{
	
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

void xoa(int a[], int &n, int vtxoa)
{
	for(int i = vtxoa; i < n; i++)
	{
		a[i] = a[i+1];
	}
	n--;
}
int soChinhPhuong(int n){
	int i=sqrt(n);
	if(i*i==n){
		return 1;
	}
	return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	nhap(a, n);
	int count = 0, id = 0;
	for(int i = 0; i < n; i++){
		if(soChinhPhuong(a[i]) == 1){
			count ++;
			id = i;
	
		}
		if(count==2){
			break;
		}
		
	}

		xoa(a, n, id-1);
	
	xuat(a, n);
}
