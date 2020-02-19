#include<stdio.h>
#include<math.h>
int main()
{
	double x,s;
	int n;
	printf("so tien gui ");
	scanf("%lf\n", &x);
	printf("so nam ");
	scanf("%d", &n);
	
//	for(int i = 1; i <= n; i++){
//		x += (0.9/100)*12*x;
//	}
//    printf("so tien sau %d nam = %lf ", n, x);
	s=(x+12*(0.9/100)*x)*pow((1+12*(0.9/100)),n-1);
	printf("%lf",s);
	return 0;
}
