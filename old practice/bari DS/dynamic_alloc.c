#include<stdio.h>
#include<stdlib.h>
main(){
	
	int *p;
	int i;
	int a=10;
	
	//p=(int *)malloc(sizeof(int));
	
	//*p=10;
	
	//array in heap
	
	p=(int *)malloc(5 *sizeof(int));
	
	for(i=0;i<=5;i++)
		p[i]=a++;
	
	for(i=0;i<=5;i++)
		printf("\n%d",p[i]);
	
}
