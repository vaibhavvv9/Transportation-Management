#include <iostream>
using namespace std;
#include "company.h"//Aggregation 
#include "room.h"
#include "hall.h"
//using namespace std;

#include "transport.h"//abstract class (ploymorphism)
#include "land.h"//Derived class
#include "water.h"//Derived class
#include "air.h"//Derived class

int main()
{ 
	int y,x = 1;
	company c;
	//class room;
	while(x)
	{
		cout << "Enter\n" << "1.Room\n" << "2.Hall\n" << "3. Not required\n";
		cin >> y;
		room r;
		hall h;
		if(y==1)
		{
			  
			  cin >> r;
		}
		if(y==2)
		{
			
			cin >> h;
		}
		switch(y)
		{
			case 1: 
			  c.GetRoom(r);
			  break;
			case 2:
			  c.GetHall(h);
			  break;
			default:
			   break;
		}
		
		cout << "Enter\n" << "0.break\n" <<"1.continue\n";
		cin >> x;
	}
	c.take_order();
	string st = c.financial_statement();
	float r;
	int s;
	r = c.distance;
	s = c.quantity;
	if(st=="Land")
	{
		land_transport l(r,s,50000,120); 
		l.show();
	}
	else if(st=="Sea")
	{
		ship_transport sh(r,s,100000,50);
        sh.show();
	}
	else
	{
		air_transport A(r,s,25000,500);
         A.show();
	}

	return 0;
}
