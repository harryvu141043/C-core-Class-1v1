#include<stdio.h>
int main(){
	
	for(int i = 1; i < 12; i++){
	    for(int j = 1; j < 29; j++){
	    	for(int k = 1; k < 116; k++ ){
	    		if(500*i + j*200 + k*50 == 5750){
	    			printf("%d %d %d \n", i, j, k);
				}
			}
		}
	}
}
