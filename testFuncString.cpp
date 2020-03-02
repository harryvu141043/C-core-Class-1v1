#include<stdio.h>
#include<string.h>
void Split(char s[],char s1[],char w[][1001],int &size){
	int n=strlen(s);
	
	int k=0;
	char ss[n];
	strcpy(ss,s);
	char* pc=strstr(ss,s1);
	while(pc!=NULL){
		strcpy(w[k],ss);
		w[k][pc-&ss[0]]=0;
		k++;
		strcpy(&ss[0],pc+strlen(s1));
		pc=strstr(ss,s1);
	
	}
	strcpy(w[k++],ss);
	size=k;
	
}
int IndexOf(char s[],char s1){
	for(int i=0;i<strlen(s);i++){
		if(s[i]==s1){
			return i;
		}
	}
	return -1;
}
void Mysplit(char s[],char words[][101],int &size){
	char s1[1001];
	int id=0;
	char *delim = " .,-\t\n;_";
	int k=0,i;
	strcpy(s1,s);
	for(i=0;i<strlen(s1);i++){
		if(IndexOf(delim,s1[i])!=-1){
			strcpy(words[k],s1);
			words[k][i]=0;
			id=i+1;
			while(IndexOf(delim,s1[id])!=-1){
				id++;
			}
			strcpy(&s1[0],&s1[id]);
			k++;
			i=0;//very important
		}
	}
	strcpy(words[k],s1);
	size=k+1;
}
main(){
	char s[1001],s1[101], s2[1001];
	gets(s);
	fflush(stdin);
	gets(s1);

	int size=100;

	char w[size][1001];
//	strtok(s,'.');
//	Mysplit(s,w,size);
	Split(s,s1,w,size);
	printf("%d",size);
//strcpy(s2,w[0]);
	for(int i=0;i<size;i++){
//		strcat(s2,"giang");
//		strcat(s2,w[i]);
		printf("%s\n",w[i]);
		
	}
//	printf("%s",s2);
}
