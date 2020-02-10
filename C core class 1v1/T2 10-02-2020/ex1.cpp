#include<stdio.h>
//kiem tra day tang,giam,khong tang khong giam
void nhap(int a[], int n){
	
	for(int i = 0; i < n; i++){
		printf("\nNhap a[%d] =", i);
		scanf("%d", &a[i]);
	}
}
int main(){
	int n,count=0;
	scanf("%d",&n);
	int a[n];
	nhap(a,n);
	for(int i=0;i<n-1;i++){
		if(a[i]==a[i+1]){
			break;
		}
		a[i]>a[i+1]?count--:count++;
	}
	
	if(count!=-(n-1)&&count!=n-1){
		puts("day ko tang,ko giam");
	}		
	else
		
		printf("%s",count==-(n-1)?"day giam":"day tang");
			
}

