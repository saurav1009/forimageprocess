#include<iostream>
using namespace std;
class rectangle
{
	int length, breadth;
	public :
   	void setDimension(int l, int b)
   	{
      		length = l;
      		breadth = b;
   	}
   	int getArea()
	{
      		return (length * breadth);
   	}
   	int compare(rectangle rect)
	{
      		int area_rect1 = this->getArea();
      		int area_rect2 = rect.getArea();
      		if ( area_rect1 > area_rect2 )
		{
        		 return true;
      		}
      		return false;
   	}
};
int main()
{
	rectangle rect1, rect2;
   	rect1.setDimension(7, 8);
   	rect2.setDimension(6, 9);
   	if (rect1.compare(rect2))
	{
      		cout << "Rectangle 1 has larger area " << endl;
   	}
   	else
	{
      		cout << "Rectangle 2 has larger area " << endl;
   	}
   	return 0;
}
