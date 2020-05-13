#include <iostream>
using namespace std;
#include "transport.h"
#include <string>
#ifndef  WATER_H
#define  WATER_H

class ship_transport: public transport
{
	string ship_name;
	int    ship_no;
	int    ship_cost;
	float   Time;
   public:
   	ship_transport(float distance,int q,int c,int s);
   	void show();
} ;
#endif//WATER_H;