#include "air.h"
#include <cstdlib>


air_transport:: air_transport(float Distance,int Quantity,int Capacity,int Speed):transport(Quantity,Capacity,Speed)
{  
	string Name[5] = {"Himalayan Airlines","Anirban Airlines","Skyline Airlines","Indigo Airlines","Air India Airlines"};
	int x = rand()%5;
	aircraft_name = Name[x];
	aircraft_no   = rand()%100 + 300;
	air_cost      = 50;
	Time          = Distance/Speed;
} 
void air_transport:: show()
{  
	int ans = Load();
	if(ans)
	{
	//Load();
	carry_goods("Air");
	cout << "Airplane name: " << aircraft_name << endl;
	cout << "Airplane no: "   << aircraft_no   << endl;
	cout << "Cost per kilometer"<< air_cost    << endl;
	cout << "Time taken(hours): " << Time << endl;
	unload();
    }
    
}