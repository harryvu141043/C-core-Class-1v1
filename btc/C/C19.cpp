#include<stdio.h>
int main()
{
	int start_hour,start_min,end_hour,end_min;
	scanf("%d%d",&start_hour,&start_min);
	scanf("%d%d",&end_hour,&end_min);
	printf("%d",(-1)*(start_hour*60+start_min-end_hour*60-end_min)*500);
}
