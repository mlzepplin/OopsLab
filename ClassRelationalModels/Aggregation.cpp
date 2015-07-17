//AGGREGATION
#include<iostream>
#include<cstring>
using namespace std;

class id{
	char password[10];
	char files[10];
public:
	id(){
		*password=NULL;
		*files=NULL;
	}
	id(char*str1,char*str2){
		strcpy(password,str1);
		strcpy(files,str2);
	}
	void getaccess(){
		cout<<password<<endl;
		cout<<"this id's files: "<<files;
	}
};

class person{
	char name[10];
public:
	id *email;
	person(){
		*name=NULL;
		email=NULL;
	}
	person(char *str1)
	{
		strcpy(name,str1);
		email=NULL;
	}
	void allocateid(){
		char temp1[10],temp2[10];
		cout<<"enter password for the id"<<endl;
		cin>>temp1;
		cout<<"enter file into id"<<endl;
		cin>>temp2;
		email=new id(temp1,temp2);
	}
	void accessor(){
		cout<<name<<endl;
		email->getaccess();
	}

};

int main(){
	char per[10];
	cout<<"enter person name";
	cin>>per;
	person p(per);
	p.allocateid();
	p.accessor();
//SEE NOW IF P DELETED THEN NO ONE WILL BE ABLE TO ACCESS P'S ID'S FILES OR PASSWORD
	//EVEN THOUGH THEY STILL EXIST IN MEMORY
	//SO IDENTITY IS MAINTAINED BUT SIGNIFICANCE IS LOST .i.e. AGGREGATION
}




