#include <iostream>
using namespace std;
#include "transport.h"
#include <string>
#ifndef LAND_H
#define LAND_H

class land_transport: public transport
{
	string  transport_name;
	int reg_no;
	int land_cost;
	float Time;
   public:
   	 land_transport(float distance,int q,int c,int s);
   	 void show();

} ;
#endif//LAND_H