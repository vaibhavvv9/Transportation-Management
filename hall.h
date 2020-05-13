#include <iostream>
using namespace std;
#ifndef HALL
#define HALL
using namespace std;
class hall
{
	float width;
	float length;
	float area;
	

    public:
    	 float   hall_cost;
	     hall();
	     friend istream& operator >>(istream& input,hall& h);
	     friend ostream& operator <<(ostream& output,hall& h);
	     float operator +(hall& h);
	     float get_area();

};
#endif//HALL
