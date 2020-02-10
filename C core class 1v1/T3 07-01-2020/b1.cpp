#include<stdio.h>
//
int main(){

	double a,b;
	scanf("%lf %lf",&a,&b);
	if(a==0){
		if(b==0){
			puts("pt vo ngiem");
		}
		else{ 
			if(b!=0){
				puts("pt vo so nghiem");
			}
		}
	}
//	else{
//		x=-b/a;
//		if(b==0){
//			puts("pt nay co 1 no x=0");
//		}
//		
//		else{
//			x=-b/a;
//			printf("pt nay co 1 no x=%lf",x);
//		
//		}
//	}
else{
	
	double x=!b?0:-b/a;
	printf("pt nay co nghiem x=%lf",x);
}
	
	
	
	
}
