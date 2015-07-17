//OPERATOR OVERLOADING
//TESTING ALL OPERATOR OVERLOADING FUNCTION FORMS USING ADDITION OPERATION


#include<iostream>
using namespace std;

class p{
public:
	int x;
	p(){
		x=1;
	}
	p(int a){
		x=a;
	}
	p operator+(p passed);
	p operator++();
	p operator++(int);
	friend p operator+(p &ref,int a);
	friend p operator+(int a,p &ref);
};
//overloading the addition operator for two ADTS
p p::operator+(p passed){
	return(p(this->x+passed.x));
}
//overloading pre-increment for ADT
p p::operator++(){
	x++;
	return *this;
}
//overloading post-increment for ADT
p p::operator++(int){
	//p temp;
	//temp.x=x;
	x++;
	//return temp;


	return (p(x--));
}
//overloading addition operator for an ADT(on left side of operator)
//and a PDT..prmitive data type(on right side of operator)
p operator+(p &ref,int a){
	ref.x+=a;
	return ref;
}

//overloading addition operator for an ADT(on right side of operator)
//and a PDT(on left side of operator
p operator+(int a,p &ref){
	ref.x+=a;
	return ref;
}

//MAIN

int main(){
	p p1;
	p p2(10);
	cout<<"1)"<<p1.x<<endl;
	cout<<"2)"<<p2.x<<endl;;
	cout<<"3)"<<(p1+p2).x<<endl;
	cout<<"4)"<<p1.x<<endl;
	cout<<"5)"<<p2.x<<endl;
	p p3;
	p3=++p2;
	cout<<"6)"<<p3.x<<endl;
	cout<<"7)"<<p1.x<<endl;
	cout<<"8)"<<p2.x<<endl;
	p p4;
	p4=p2++;
	cout<<"9)"<<p4.x<<endl;
	cout<<"10)"<<p2.x<<endl;
	p p5;
	p5=p2+7;
	cout<<"11)"<<p5.x<<endl;
	p p6;
	p6=5+p2;
	cout<<"12)"<<p6.x<<endl;
	return 1;
}



