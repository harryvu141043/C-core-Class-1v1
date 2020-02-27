#include<stdio.h>
int main()
{
	int a,b,c;
	for(int i = 100;i <= 999; i++){
//		int a = 0;
//		int b = 0;
//		int c = i;
//		while(c){
//		
//			a = c%10;
//			b+= a*a*a;
//			c/=10;
//		}
//		if(b==i){
//			printf("%d\n", i);
//		}
		c=i%10;
		b=(i/10)%10;
		a=i/100;
		if((a*a*a)+(b*b*b)+(c*c*c)==i){
			printf("%d\n",i);
		}
	}
}
