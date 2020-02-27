#include<stdio.h>
#include<string.h>
//"vu huy hoai son"
//&s[3]="huy hoai son"
main(){
	char s[1001];

	char s1[1001];
	char s2[1001];
	gets(s);
	strcpy(s2,s);
	strcpy(s1,s);
	int i,j,k,count=0;
	for(i=0;i<strlen(s);i++){
		if(s[i]==' '){
			break;
		}
	}
	s1[i]='\0';
	strcat(s1," Hello");
	printf("%s\n",s1);
	for(j=i+1;j<strlen(s2);j++){
		if(s2[j]==32){
			break;	
		}
	}
	strcpy(s2,&s2[j]);
	
	strcat(s1,s2);
//	printf("%s\n",s1);
	for(k=0;k<strlen(s1);k++){
		if(s1[k]==32){
			count++;
		
		}
		if(count==3){
			break;
		}
		
	}
//	printf("%d",k);
	s1[k+1]='\0';
	strcat(s1,"World");
	printf("%s",s1);
}
