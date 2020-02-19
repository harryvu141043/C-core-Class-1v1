#include<stdio.h>
void Nhapmang(double a[],int n){
	
	for(int i=0;i<n;i++){
		printf("nhap element",i);
		scanf("%lf",&a[i]);
	}
}


int main(){
	int n;
	bool t=true,g=true;
	scanf("%d",&n);
	double a[n];
	Nhapmang(a,n);
	for(int i=0;i<n-1;i++){
		if(a[i]==a[i+1]){
			printf("%lf",a[i+1]);
			break;
		}
		if(a[i]<a[i+1]){
			g=false;
		}
		if(a[i]>a[i+1]){
			t=false;
		}
		
		if(t==false&&g==false){
			printf("%lf %d",a[i+1],i+1);
			break;
		}
	}
}
