#include <iostream>
//#include <fstream>
using namespace std;
#ifndef ROOM_H
#define ROOM_H
//using namespace std;
class room
{
	float width;
	float length;
	float area;
	

    public:
     float room_cost;
     room();
     friend istream& operator >>(istream& Input,room& r);
     friend ostream& operator <<(ostream& Output,room& r);
     float operator +(room& r);
     float get_area();

};
#endif//ROOM