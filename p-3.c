#include<stdio.h>

swap(int *a, int *b){
	
	int c;
	c = *a;
	*a = *b;
	*b = c;
}

main(){
	
	int i, n, arr[100];
	
	
	printf("Enter The Number Of Elements :- ");
	scanf("%d", &n);
	
	printf("\n");
	
	printf("Enter %d Elements: \n\n", n);
	
	for(i=0; i<n; i++){
		
		printf("Enter The Elements at arr[%d] :- ", i);
		scanf("%d", &(*(arr+i)));
	}
	
	int *ptr1, *ptr2, c;
	
	ptr1 = arr;
	ptr2 = arr + n-1;
	
	while(ptr1 < ptr2){
		
		c = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = c;
		ptr1++;
		ptr2--;
	}
	
	printf("\n");
	
	for(i=0; i<n; i++){
		
		printf("Arr[%d] = %d\n", n-(i+1), *(arr+i));
	}
}
