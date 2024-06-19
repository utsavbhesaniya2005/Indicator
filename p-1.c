#include<stdio.h>

swap(int *p, int *q){
	
	int temp;
	
	temp = *p;
	*p = *q;
	*q = temp;
}

main(){
	
	int a;
	int b;
	
	printf("\nEnter Number To Swap Value Of A :- ");
	scanf("%d", &a);
	
	printf("Enter Number To Swap Value Of B :- ");
	scanf("%d", &b);
	
	swap(&a,&b);
	
	printf("\n\nAfter Swapping Value Of A = %d\n", a);
	printf("After Swapping Value Of B = %d\n", b);
	
}
