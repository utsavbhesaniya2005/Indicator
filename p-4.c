#include<stdio.h>

int length(char *string){
	
	int len;
	while(*string){
		
		len++;
		string++;
	}
	return len;
}

main(){
	
	char str[100];
	
	printf("\nEnter a String :- ");
	scanf("%s", str);
	
	printf("\nLength Of a Given String Is :- %d", length(str));
	
}
