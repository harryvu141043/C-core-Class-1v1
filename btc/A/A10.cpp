#include<stdio.h>
int main(){
	int traudung, traunam, traugia;
	for(traudung = 1; traudung <= 20; traudung++){
		for(traunam = 1; traunam <= 33; traunam++){
			for(traugia = 1; traugia <= 100; traugia++){
				if((traudung + traunam + traugia == 100) && (traudung*5 + traunam*3 + traugia/3 == 100)&&traugia%3==0){
					printf("%d  %d  %d\n", traudung, traunam, traugia);
				} 
			}
			
		}
		
	}
}
