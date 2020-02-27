#include<stdio.h>
int main()
{
	int n;
	printf("nhap n = ");
	scanf("%d", &n);
	double sum = 0;
	for(int i = 1; i <= n; i++){
//		sum += 1/(double)i;
        sum += 1/(i+0.0);
	}
	printf("tong sum = %lf", sum);
}
