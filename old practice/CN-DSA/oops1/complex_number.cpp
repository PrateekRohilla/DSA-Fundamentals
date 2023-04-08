//may be wrong
#include<iostream>
using namespace std;


class ComplexNumber{
	
		
		int real;
		int img;
	
	
	public:
		
		ComplexNumber(int real,int img){
			
			this -> real = real;
			this -> img = img;	
			
		}
		
		void plus(ComplexNumber c2){
			
			int x = this -> real + c2.real;
			int y = this -> img + c2.img;
			this -> real = x;
			this -> img = y;
			
		}
		
		void multiply(ComplexNumber c2){
			 int real = (this -> real * c2.real) - (this -> img * c2.img);
			 int img = (this -> real * c2.img) + (this -> img * c2.real);
			 this -> real = real;
			 this -> img = img;
		
		}
		
		void print(){
			cout<<this -> real <<" + " <<this -> img <<"i" <<endl;
		}
};





main(){
	
	int real1,img1,real2,img2;
	
	cin>>real1>>img1;
	cin>>real1>>img1;
	
	ComplexNumber c1(real1,img1);
	ComplexNumber c2(real2,img2);
	
	int choice;
	cin>>choice;
	
	if(choice == 1){
		c1.plus(c2);
		c1.print();
	}
	
	if(choice == 2){
		c1.multiply(c2);
		c1.print();
	}
	
	else
		return 0;
	
	
	
}
