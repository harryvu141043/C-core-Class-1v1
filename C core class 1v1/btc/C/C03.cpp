#include<stdio.h>
#include<math.h>
int ktra(int a){
	if(a < 2) return 0;
	else{
		for(int i = 2; i <= sqrt(a); i++){
			if(a % i == 0) return 0;
		}
		return 1;
	}
	
}
bool CheckPrime(int n){
	if(n<2){
		return false;
	}
	if(n==2 || n==3 || n==5||n==7){
		return true;
	}
	if(n%2==0 || n%3==0){
		return false;
	}
	for(int i=5;i*i<n;i+=6){
		if((n%i==0) || (n%(i+2)==0)) {
			return false;
		}
	}
	return true;
}
main(){
	printf("%d",CheckPrime(10001));
}
