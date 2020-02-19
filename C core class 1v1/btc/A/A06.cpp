#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int sum = 0;
	for(int i = 1; i <= n;i+=3){
		sum+=i;
		printf("%d\n", i);
	}
	printf("tong cac so chia het cho 3 du 1 la sum = %d", sum);
}
