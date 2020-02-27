#include<stdio.h>
#include<math.h>
void nhap(int a[], int n)
{
	
	for(int i = 0; i < n; i++){
		printf("\nnhap a[%d]", i);
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

void chen(int a[], int &n, int vitricanchen, int socanchen)
{
	for(int i = n; i > vitricanchen; i--){
		a[i]=a[i-1];
	}
	a[vitricanchen] = socanchen;
	n++;
}


int soChinhPhuong(int a)
{
	if(a > 0){
		int sqr = sqrt(a);
        if(sqr*sqr == a){
            return 1;
        }
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
		if(count == 2){
			printf("vt la:%d\n",id);
		    break;
	    }
	}
	chen(a, n, id, a[id ]+1);
//chen(a,n,4,6);
	
	xuat(a, n);
}






