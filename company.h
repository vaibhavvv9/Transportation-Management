#include <bits/stdc++.h>
using namespace std;
#include <string>
#include "room.h"
#include "hall.h"
#ifndef COMPANY_H
#define COMPANY_H
using namespace std;
typedef long long int ll;

//class room;
class company
{
	string comp_name;
	ll reg_no;
	string bussiness_type;
    room r[10];
    hall h[10]; 
    static int countr;
    static int counth;
    public:
    	company();
    	void take_order();
    	string Export();
    	string financial_statement();
    	void Recipt();
    	void GetRoom(room& x);
    	void GetHall(hall& h);
    ll quantity;
    ll distance;
};
#endif//COMPANY_H 