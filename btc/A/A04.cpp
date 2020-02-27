#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int sum = 0;
	for(int i = 1; i <= n;i++){
		printf("%d\n",i);
		sum+=i;
		if((i+1)%7==0){
			i++;
		}
	}
	printf("tong cac so khong chia het cho 7 la sum = %d", sum);
}
