//ASSOCIATION
#include<iostream>
#include<cstring>
using namespace std;

class computer{
	char files[10];
public:
	computer(){
		*files=NULL;
	}
	computer(char* str){
		strcpy(files,str);
	}
	void show(){
		cout<<files;
	}
};

class person{
	char name[10];
public:
	computer *c;
	person(){
		*name=NULL;
		c=NULL;
	}
	person(char*str){
		c=NULL;
		strcpy(name,str);
	}
	void show(){
		cout<<name;
		c->show();
	}
};

int main(){

	char per[10];
	cout<<"enter 1st person name";
	cin>>per;
	person p1(per);
	cout<<endl<<"enter 2nd person name";
	cin>>per;
	person p2(per);
	//ALLOCATING MEMORY TO A COMPUTER
	computer*comp;
	char fil[10];
	cout<<"enter file into computer";
	cin>>fil;
	comp=new computer(fil);

	//NOW SAY P1 WANTS TO ACCESS THE FILES ON A COMPUTER,HE CAN
	//P2 WANTS TO USE IT ,HE CAN ALSO ACCESS IT , NO MATTER IF P1 EXISTS OR NOT
	//.I.E.INDEPENDANT EXISTANCE OF COMPUTER AND PERSONS
	//I.E.ASSOCIATION

	p1.c=comp;
	cout<<"p1's access: ";
	p1.c->show();
	cout<<endl;
	p2.c=comp;
	cout<<"p2's access: ";
	p2.c->show();
}



