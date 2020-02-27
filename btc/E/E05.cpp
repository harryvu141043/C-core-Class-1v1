#include<stdio.h>
 
void NhapMang(double a[], int &n){
//	printf("\nNhap so phan tu:");
	
	printf("\nNhap tung phan tu cho mang:\n");
	for(int i = 0; i < n; i++){
		printf("a[%d]", i);
		scanf("%lf", &a[i]);
	}
}
void XuatMang(double a[], int n){
	for(int i = 0; i < n; i++){
		printf("%lf\n", a[i]);
	}
}
void swap(double &a,double &b)//pass by address
{
	double t=a;
	a=b;
	b=t;
}
void Sort(double a[],int n,int type){
	int i=0,j;
	while(i<n-1){
		j=i+1;
		while(j<n){
			if(a[i]<a[j]==type){
				swap(a[i],a[j]);
			}
            j++;
        }
        i++;
		}
}

int main()
{

	int m, n, size=0,j=0,found;
	printf("\n nhap mang A:\n");
	scanf("%d", &m);
	double a[m];
	NhapMang(a, m);
	scanf("%d", &n);
	double b[n];
	printf("\n nhap mang B:\n");
	
	NhapMang(b, n);
	Sort(a,m,0);
	double c[size];
	for(int i=0;i<m;i++){
		if(a[i]==c[size]){
			continue;
		}
//		j=0;
//		while(b[j]!=a[i]&&j<n){
//			j++;
//		}
		j=0;
		while(j<n){
			if(a[i]==b[j]){
				found=1;
				break;
			}
			j++;
		}
		//ko tim dc j==n
//		if(j<n){
//			c[size++]=a[i];
//			printf("f\n");
//		}
if(found){
		c[size++]=a[i];
}
	}
	XuatMang(c, size);

	
}
