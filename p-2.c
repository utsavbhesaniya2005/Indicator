#include<stdio.h>
main(){
	
	int i, n, arr[100];
	
	printf("Enter The Number Of Elements :- ");
	scanf("%d", &n);
	
	printf("\n");
	
	printf("Enter %d Elements: \n\n", n);
	
	for(i=0; i<n; i++){
		
		printf("Enter The Elements at arr[%d] :- ", i, arr[i]);
		scanf("%d", &(*(arr+i)));
	}
	
	printf("\n");
	
	for(i=0; i<n; i++){
		
		printf("Arr[%d] = %d\n", i, *(arr+i));
	}
}
