#include<stdio.h>
int tinhGt(int n){
	int sum = 1;
	for(int i = 1; i <= n; i++){
		sum*=i;
	}
	return sum;
}
int main()
{
	int n;
	scanf("%d", &n);
	int k; 
	scanf("%d", &k);
	double C;
	C = 1.0*tinhGt(n)/(tinhGt(k)*tinhGt(n-k));
	printf("%lf", C);
}
