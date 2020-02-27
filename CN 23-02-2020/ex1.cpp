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

 int ngTo(int n){
 	if( n < 2) return 0;
 	for(int i = 2; i <= sqrt(n); i++){
 		if(n%i==0) return 0;
	 }
	 return 1;
 }
 
 
void tangDan(int a[], int n)
{
	int tg = 0;
	for(int i = 0; i < n-1; i++){
		if(ngTo(a[i]) == 1){
			continue;
		}
		else{
			for(int j = i+1; j < n; j++){
				if(a[i] > a[j]&&ngTo(a[j])==0){
			       tg = a[i];
			       a[i] = a[j];
			       a[j] = tg;
			    }
			}
			
			
		}
	}
		
}


int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	nhap(a, n);
	tangDan(a, n);
	xuat(a, n);
}




