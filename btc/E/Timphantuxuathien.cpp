#include<stdio.h>
void Nhapmang(int a[],int n){
	
	for(int i=0;i<n;i++){
		printf("nhap element",i);
		scanf("%d",&a[i]);
	}
}
void Xuatmang(int a[],int n){
	for(int i=0;i<n;i++){
//		printf("[%d]",i);
		printf("%d\n",a[i]);
	}
}
//count[i] dem so lan xuat hien cua a[i] trong mang a
// 1 1 5 6 8 7 1 1 
// 4 3 
main(){
	int n,i=0;
	scanf("%d",&n);
	int a[n];
	Nhapmang(a,n);
	int count[n];
	while(i<n){
		count[i++]=1;
	}
	for(i=0;i<n-1;i++){
		if(count[i]!=-1){
			for(int j=i+1;j<n;j++){
				if(a[i]==a[j]){
					count[i]++;
					count[j]=-1;
				}
			}
		}
	}
	for(i=0;i<n;i++){
		if(count[i]==2){
			printf("%d\n",a[i]);
		}
	}
}
