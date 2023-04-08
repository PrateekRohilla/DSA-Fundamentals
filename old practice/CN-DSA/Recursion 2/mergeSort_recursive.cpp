#include<iostream>
using namespace std;

void merge(int part1[],int size1,int part2[],int size2,int input[]){
	
	int i = 0, j = 0, k = 0;
	
	while(i < size1 && j < size2){
		
		if(part1[i] < part2[j])
			input[k++] = part1[i++];
		else
			input[k++] = part2[j++];
		
	}
	
	while(i < size1)
		input[k++] = part1[i++];
		
	while(j < size2)
		input[k++] = part2[j++];
	
}

void mergeSort(int input[],int size){
	
	if(size <= 1)
		return;
	
	int part1[100];
	int part2[100];
	
	int mid = size/2;
	
	int size1 = mid,size2 = size-mid;
	
	for(int i=0;i<mid;i++)
		part1[i] = input[i];
		
	int k=0;
	for(int i=mid;i<size;i++)
		part2[k++] = input[i];
		
	mergeSort(part1,size1);
	mergeSort(part2,size2);
	merge(part1,size1,part2,size2,input);
	
}

main(){
	
	int input[200];
	int size = 10;
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	
	mergeSort(input,size);
	
	for(int i=0;i<size;i++)
		cout<<input[i]<<"  ";
	
}
