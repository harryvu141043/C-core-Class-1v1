#include<stdio.h>
main(){
	int w;
	int gt=0;
	scanf("%d",&w);
	if(w>=0&&w<=100){
		gt=w*500;
	}
	else{
		if(w>=101&&w<=150){
			
			gt+=100*500+(w-100)*550;
		}
		else{
			if(w>=151&&w<=200){
				gt=100*500;
				gt+=50*550;
				gt+=(w-100-50)*600;
			}
			else{
				gt=100*500;
				gt+=50*550;
				gt+=50*600;
				gt+=(w-100-50-50)*650;
			}
		}
	}
	printf("%d",gt);
}
