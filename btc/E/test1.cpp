#include<stdio.h>

int main()
{
	float a, i,b ,c , d;
	int z1 = a + b*i;
	int z2 = c + d*i;
	scanf("%f %f %f %f", &a, &b, &c, &d);
	printf("%f",z1);
//	printf("z1 = %f + %f*i\n\n", a, b);
//	printf("z2 = %f + %f*i\n\n", c, d);
	
	printf("tong z1 + z2 = %f + (%f)*i", (a+c), (b+d));


	return 0;
}
