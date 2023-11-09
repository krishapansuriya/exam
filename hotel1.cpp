#include<iostream>
using namespace std;
class Hotel{
	public :
		int id,type,staff_size,room_size,establish_year,rating_type;
		char name[100],address[100],website[100];
		void setData()
		{
			cout<<"Enter id="<<id<<endl
			    <<"Enter name="<<name<<endl
			    <<"Enter type="<<type<<endl
			    <<"Enter staff_size="<<staff_size<<endl
			    <<"Enter room_size="<<room_size<<endl
			    <<"Enter establish_year="<<establish_year<<endl
			    <<"Enter address="<<address<<endl
			    <<"Enter rating_type="<<rating_type<<endl
			    <<"Enter website="<<website<<endl;
		}
		void getData()
		{
			this->id = id;
			string(this->name,name);
			this->type = type;
			this->staff_size = staff_size;
			this->room_size = room_size;
			this->establish_year = establish_year;
			string(this->address,address);
			this->rating_type = rating_type;
			string(this->website,website);
		}
};
main()
{
	Hotel h;
	h.setData();
	h.getData();
}
