#include "land.h"
#include <cstdlib>

land_transport:: land_transport(float Distance,int Quantity,int Capacity,int Speed):transport(Quantity,Capacity,Speed)
{ 
	string name[5] = {"Ayodhya rath","Maharani express","Hawa Hwai","Maa lakshmi rath","Maa vindhvasni Express"};
	int x = rand()%5;
	transport_name = name[x];
    reg_no = rand()%100 + 1000000;
    land_cost = 10;
    Time = Distance/Speed;
}
void land_transport:: show()
{   
	int ans = Load();

	if(ans)
	{
	//Load();
	carry_goods("Land");
	cout << "Transport name: "   << transport_name  << endl;
	cout << "Bus number: "       <<  reg_no      << endl;
	cout << "Cost per kilometer: "<< land_cost      <<endl;
	cout << "Time taken(hours): " << Time           << endl;
	unload();
    }
    

}
