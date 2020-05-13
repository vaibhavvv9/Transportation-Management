#include <iostream>
using namespace std;
#include "transport.h"
#include <string>
#ifndef AIR_H
#define AIR_H
using namespace std;
class air_transport: public transport
{   
	string aircraft_name;
	int aircraft_no;
	int air_cost;
    float Time;
   public:
   	air_transport(float distance,int q,int c,int s);
   	void show();

};
#endif//AIR_H
