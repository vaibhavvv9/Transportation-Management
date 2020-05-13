#include <iostream>
using namespace std;
#ifndef TRANSPORT_H
#define TRANSPORT_H

class transport
{  
    protected:
		int weight_of_goods;
		int capacity;
		int speed;
       
	public: 
	   transport(int quantity,int c,int s);
	   int   Load() ;
	   void unload();
	   void carry_goods(string s);
	   virtual void show() = 0;

};
#endif//TRANSPORT_H     


