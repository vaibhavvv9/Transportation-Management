#include "room.h"
//#include <fstream>
room::room()
{
	length = 0;
	width = 0;
	area = 0;
	room_cost = 0;
}
istream& operator>>(istream& Input,room& r)
{  
	cout << "Enter length and width of room: ";
	Input >> r.length >> r.width; 
	return Input; 
}
ostream& operator<<(ostream& Output,room& r)
{   
	Output << "Length: "<< r.length << endl;
	Output << "Width: " <<  r.width << endl;
	Output << "Area: "  <<  r.area  << endl;
	Output << "Cost of room"<<r.room_cost<<endl;

	return Output;
}
float room:: operator+(room& r)
{
	return (this->area + r.area); 
}
float room:: get_area()
{
	area = length * width;
	room_cost = (area * 1.5);
	return area;
} 
