//COMPOSITION
#include<iostream>
#include<cstring>
using namespace std;

class child{
	char name[10];
public:
	child(){
		*name=NULL;
	}
	child(char *str){
		strcpy(name,str);
	}
	void getname(){
		cout<<name;
	}
};
class parent{
	char name[10];

public:
	child c;
	parent(){
		*name=NULL;
	}
	parent(char *par,char *chi):c(chi)
	{
		strcpy(name,par);

	}
	void getparname(){
		cout<<name;
	}
};

int main(){
	char temp1[10],temp2[10];
	cout<<"enter parent name";
	cin>>temp1;
	cout<<"enter child's name";
	cin>>temp2;
	parent p(temp1,temp2);
	cout<<endl<<endl;
	p.getparname();
	p.c.getname();
}


