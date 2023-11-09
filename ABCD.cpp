#include<iostream>
using namespace std;
class A{
	public :
		void setter()
		{
			cout<<"Enter id = "<<id<<endl;
			cout<<"Enter name = "<<name<<endl;
			cout<<"Enter role = "<<role<<endl;
		}
};
class B{
	public :
		void setter()
		{
			cout<<"Enter salary = "<<salary<<endl;
			cout<<"Enter experience = "<<experience<<endl;
		}
};
class C{
	public :
		void setter()
		{
			cout<<"Enter comp_name = "<<comp_name<<endl;
			cout<<"Enter address = "<<address<<endl;
		}
		void getter()
		{
			char(->name,name);
			char(->role,role);
			this->salary = salary;
		}
};
class D : public A : public B : public c{
	public :
		void setter()
		{
			cout<<"Enter email = "<<email<<endl;
			cout<<"contact = "<<contact<<endl;
		}
		void getter()
	    {
	    	this->id = id;
	    	char(->name,name);
			char(->role,role);
			this->salary = salary;
			char(this->experiance,experiance);
			char(this->comp_name,comp_name);
			char(this->address,address);
			char(this->email,email);
			this->contact;
		}
};
main()
{
	
}
