#include<stdio.h>
#include<math.h>
main(){
	int n;
	double s=0,x;
	
	scanf("%d",&n);
	scanf("%lf",&x);
	double a[n+1];
	for(int i=n;i>=-n;i--){
		if(i>=0){
		
			printf("a[%d]:",i);
			scanf("%lf",&a[i]);
		}
		if(i<=0){
			s+=a[i+n]*pow(x,i+n);
		}
	}
	printf("\n%lf",s);
}
