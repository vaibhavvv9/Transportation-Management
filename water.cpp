#include "water.h"
#include <cstdlib>
ship_transport:: ship_transport(float Distance,int Quantity,int Capacity,int Speed):transport(Quantity,Capacity,Speed)
{ 
  string name[5] = {"Transocean","KZC","MSC oscar","SS Altair","MV Jindal kamakshi"};
  int x = rand()%5;
  ship_name = name[x];
  ship_no   = rand()%1000 + 1200;
  ship_cost = 20;
  Time = Distance/Speed;
}
void ship_transport:: show()
{
	int ans=Load();
	if(ans)
	{
	//Load();
	carry_goods("Water");
	cout << "Ship name: " << ship_name << endl;
	cout << "Ship number: "<< ship_no << endl;
	cout << "cost per kilometer: "<< ship_cost<<endl;
	cout << "Time taken(hours): " << Time << endl;
	unload();
    }
    
}