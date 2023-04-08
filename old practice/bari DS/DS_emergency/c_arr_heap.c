#include<stdio.h>
main(){
	int *p;
	
	p = (int *)malloc(5*sizeof(int));
	p[0]=2;
	
	printf("%d",p[0]);
	
	free(p);
}

