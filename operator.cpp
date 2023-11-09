#include<iostream>
using namespace std;
class points{
	public :
		int x;
		int y;
		void set()
		{
			cout<<"x ="<<x;
			cout<<"Y ="<<y;
		}
		void get()
		{
			this->x = x;
			this->y = y;
		}
		points operator+(int ans)
		{
			ans=x+y;
			return ans;
		}
};
main()
{
	points p;
	p.set();
	p.get();
}
