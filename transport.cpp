#include "transport.h"
#include <cstdlib>
transport:: transport(int quantity,int c,int s)
{
	weight_of_goods = quantity;
	capacity = c;
	speed = s;
} 
int  transport:: Load() 
{ 
	if( weight_of_goods <= capacity)
	{
		cout << "Goods are loaded successfully\n";
		return 1;
	} 
    else 
    {
    	cout << "Goods can't be loaded\n";
    	return 0;
    }
	
}  
void transport:: unload()
{
	if( weight_of_goods <= capacity)
	{
		cout << "Goods are unloaded successfully\n";
	} 
    else   
    {
    	cout << "Goods can't be unloaded\n";
    }
} 
void transport:: carry_goods(string s)
{
  cout << "Goods are transferred by " << s << endl;
}

