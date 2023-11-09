#include<iostream>
using namespace std;
class Distance{
	public :
		int feet;
		int inch;
};
main()
{
	Distance d;
	int d1,d2,d3;
	cout<<"Enter first feet="<<endl;
	cin>>d1.feet;
	cout<<"Enter first inch="<<endl;
	cin>>d1.inch;
	cout<<"Enter second feet="<<endl;
	cin>>d2.feet;
	cout<<"Enter second inch="<<endl;
	cin>>d2.inch;
	d3.feet=d1.feet+d2.feet;
	d3.inch=d1.inch+d2.inch;
	while(d3.inch>=12)
	{
		d3.feet++;
		d3.inch=d3.inch-12;
	}
	return 0;
}
