#include<stdio.h>
#include<string.h>

main(){
	
	FILE *P;
	
	char name;
	
	P= fopen("Demo.txt","r");
	
	if(P == NULL){
		printf("error");
	}
	
	else{
		
		while(name != EOF){
			name=fgetc(P);
			
			printf("%c",name);
		}
	
	}
		fclose(P);
}
