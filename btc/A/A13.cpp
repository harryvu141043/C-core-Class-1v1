#include<stdio.h>

int main()
{
	int a, b, c, d;
	printf("xin moi nhap so giay : ");
	scanf("%d", &a);
	b = a/3600;
	c = (a - b*3600)/60;
	d = (a - b/3600)%60;
	printf("ket qua la : %d gio %d phut %d giay", b, c, d);


	return 0;
}
