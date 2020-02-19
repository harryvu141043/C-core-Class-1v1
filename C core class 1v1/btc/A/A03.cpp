#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int sum = 0;
	for(int i = 0; i <= n;i+=7){
		sum+=i;
	}
	printf("tong cac so chia het cho 7 la sum = %d", sum);
}
