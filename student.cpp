#include<iostream>
using namespace std;
class student
{
	char name;
	int grade_point;
	public:
	void put_data(char n,int gp)
	{
		name = n;
		grade_point = gp;
	}
	int get_data()
	{
		return(grade_point);
	}
	bool compare(student s)
	{
		int gp_1 = this->get_data();
		int gp_2 = s.get_data();
		if(gp_1 > gp_2)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
int main()
{
	student s1,s2;
	s1.put_data("saurav",80);
	s2.put_data("sohini",99);
	if(s1.compare(s2))
	{
		cout<<"saurav dont study\n";
	}
	else
	{
		cout<<"sohini is a bright student\n";
	}
	return 0;
}
