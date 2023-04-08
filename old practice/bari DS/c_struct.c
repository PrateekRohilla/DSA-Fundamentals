#include<stdio.h>
struct testing{
	int data1;
	int data2;
	float data3;
	double data4;
};


main(){
		
	struct testing t1;
	t1.data1=10;
	t1.data2=20;
	t1.data3=2.22;
	t1.data4=4.4444;
	
	printf("Printing the data :\n\n");
	
	printf("\n%d",t1.data1);
	printf("\n%d",t1.data2);
	printf("\n%f",t1.data3);
	printf("\n%f",t1.data4);
}

