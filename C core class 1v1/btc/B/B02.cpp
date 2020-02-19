#include<stdio.h>
#include<math.h>
int ngTo(int a){
	if(a < 2) return 0;
	else{
		for(int i = 2; i <= sqrt(a);i++){
			if(a % i == 0) return 0;
		}
		return 1;
	}
}


int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	if(ngTo(a) == 1 && ngTo(b) ==1 && a!=b){
		printf("a va b la snt cung nhau");
	}
	else printf("khong phai snt cung nhau");
}
