#include<stdio.h>
#include<stdio.h>
void nhap(int a[], int &n)
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

int main()
{
	int n,id1,id2;
	scanf("%d",&n);
	int a[n];
	nhap(a,n);
	if(a[0]<a[1]){
		id1=1;
		id2=0;
	}
	else{
		id1=0;
		id2=1;
	}
	for(int i=2;i<n;i++){
		if(a[i]>a[id1]){
			id2=id1;
			id1=i;
			
		}
		else{
			if(a[i]>a[id2]&&a[i]<a[id1]){
				id2=i;
			}
		}
	}
//	if(a[id2]==a[id1]){
//		id2=id1;
//	}
	printf("%d %d %d %d",a[id1],id1,a[id2],id2);
}
