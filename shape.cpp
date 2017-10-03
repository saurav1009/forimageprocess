#include<iostream>
using namespace std;
class shape
{
	public:
	double l,b;
	void getdata(double l1, double b1)
	{
		l = l1;
		b = b1;
	}
	void virtual display_area()=0;
};
class triangle:public shape
{
	void display_area()
	{
		cout<<"\nThe area of triangle is :"<<(0.5*l*b);
	}
};
class rectangle:public shape
{
	void display_area()
	{
		cout<<"\nThe area of rectangle is :"<<(l*b);
	}
};
int main()
{
	shape *s1;
	triangle t;
	s1 = &t;
	s1->getdata(20,30);
	s1->display_area();
	rectangle r;
	s1 = &r;
	s1->getdata(20,30);
	s1->display_area();
}
