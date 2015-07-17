//purely virtual and inheritence
/*
 * assgn.cpp
 *
 *  Created on: 29-Oct-2014
 *      Author: Rishabh gupta
 */
#include<iostream>
#include<cstring>
using namespace std;

class contact{
protected:
	int phone;
	char address[20];
public:
	contact(){
		phone=0;
		*address=NULL;
	}
	contact(int a,char* str){
		phone=a;
		strcpy(address,str);
	}
	int getnum(){
		return phone;
	}
	char* getaddress(){
		return &address[0];
	}
	void display(){
		cout<<phone;
		cout<<address;
	}
	virtual bool match(char*str)=0;
		//MAKING IT A PURELY VIRTUAL FUNCTION,HENCE THIS CLASS

							//AN ABSTRACT CLASS
	virtual~contact(){};
};

class person: public contact{
	char fname[10];
public:
	person(){
		*fname=NULL;
	}
	person(char*str,int a,char*ad):contact(a,ad){
		strcpy(fname,str);
	}
	void display(){
		cout<<phone<<endl;
		cout<<address<<endl;
		cout<<fname<<endl;
		cout<<endl;

	}
	bool match(char*str){
		int temp=0;
	if(!(temp=strcmp(fname,str)))
	return true;
	else
	return false;
	}

};

class organisation: public contact{
	char name[20];
	char type[20];
public:
	organisation(){
		*name=NULL;
		*type=NULL;
	}
	organisation(char*str1,char*str2,int a,char*ad):contact(a,ad){
		strcpy(name,str1);
		strcpy(type,str2);
	}
	void display(){
		cout<<phone<<endl;
		cout<<address<<endl;
		cout<<name<<endl;
		cout<<type<<endl;
		cout<<endl;
	}
	bool match(char*str){
		int temp=0;
		if(!(temp=strcmp(name,str)))
			return true;
		else
			return false;
	}
};
class adbook{
	contact *c[5];
	int count;
public:
	adbook(){
		count=0;
		*c=NULL;
	}
	void add(contact*a){
		c[count]=a;
		count++;
	}
	int getcount(){
		return count;
	}
	contact*getcontact(int i){
		return c[i];
	}

};


int main(){
	person *p[2];
	organisation *o[2];
	adbook a;
	bool x;

	for(int i=0;i<2;i++)
	{
		cout<<"enter "<<i<<" person name"<<endl;
		char temp1[20];
		cin>>temp1;
		cout<<"enter person phone"<<endl;
		int num;
		cin>>num;
		cout<<"enter person address"<<"endl";
		char temp2[20];
		cin>>temp2;
		p[i]=new person(temp1,num,temp2);
	}
	for(int i=0;i<2;i++)
		{
			cout<<"enter "<<i<<" organisation name"<<endl;
			char temp1[20];
			cin>>temp1;
			cout<<"enter organisation phone"<<endl;
			int num;
			cin>>num;
			cout<<"enter organisation address"<<endl;
			char temp2[20];
			cin>>temp2;
			cout<<"enter organisation type"<<endl;
			char temp3[20];
			cin>>temp3;
			o[i]=new organisation(temp1,temp3,num,temp2);
		}
		for(int i=0;i<2;i++){
			a.add(p[i]);
			a.add(o[i]);
		}

		cout<<"want to match"<<endl;
		char c;
		cin>>c;
		while(c=='y')
		{cout<<"enter what you want to match";
		char temp[20];
		cin>>temp;
		contact *t;
		int i;
		for(i=0;i<4;i++)
		{t=a.getcontact(i);
		x=t->match(temp);
		if(x)
		{
			cout<<"match found";
			break;
		}
		}
		if(i==4)
			cout<<"match not found";
		cout<<"enter choice"<<endl;
		cin>>c;
		}

return 1;
}


