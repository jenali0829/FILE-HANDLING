#include<stdio.h>
#include<string.h>

main(){
	
	FILE *P;
	
	char name[100];
	
	P= fopen("Demo.txt","w");
	
	if(P == NULL){
		printf("error");
	}
	
	else{
		int i;
		
		printf("Enter text:");
		gets(name);
		
		for(i=0; i<strlen(name); i++){
			fputc(name[i],P);
		}
		fclose(P);
	}
}
