#include "company.h"


company:: company()
{   
    string Name[5]={"BHARAT TRANSPORT","BALAJI PACKERS","GILL TRANSPORT SERVICES","SAHARA LOGISTIC","GATIMAN CARGO"};
	int x = rand()%5;
	comp_name = Name[x];
	reg_no    =  rand()%1000000 + 156347800;
	cout << "Enter type of product to be transported: ";
	cin >> bussiness_type;

}
void company:: take_order()
{  
	cout << "Enter the quantity(Kg) of product: ";
	cin >> quantity;
	cout << "Enter distance of Destination from source: ";
    cin >> distance;
    //cout << endl;
}
string company:: Export()
{
	string s,m;
	cout << "Enter the Destination of transportation: ";
	cin >> s;
	cout << "Enter mode of transportaion: Fast|Slow: ";
	cin >> m;
	if(s=="India")
	{
		if(m == "Fast")
		return "Air";
	    else
	    return "Land";
	}
	else
	{
		if(m == "Fast")
		return "Air";
	    else
	    return "Sea";
	}
   
}
string company:: financial_statement()
{
	string mode = Export();
	Recipt();
	cout << "Product will be transported by: "<< mode << endl;
    cout << "Cost of Transportation is: ";
    long double cost;
    if(mode == "Land")
     cost = (quantity * distance * 10);
    else if(mode == "Sea")
     cost = (quantity * distance * 20);
    else
     cost = (quantity)* distance * 50;
    for(int i=0;i<countr;i++)
     cost = cost + (r[i]).room_cost;
    for(int i=0;i<counth;i++)
      cost = cost + (h[i]).hall_cost;

     cout << cost << " rupees"<<endl;
       return mode;

}
void company:: Recipt()
{
	cout << "\nCOMPANY NAME: " << comp_name<<endl;
	cout << "REGISTRATION NUMBER: "<<reg_no<<endl;
	cout << "PRODUCT TYPE: " << bussiness_type<<endl;
	cout << "QUANTITY: " << quantity << endl;
}
void company:: GetRoom(room& x)
{
   r[countr] = x;
   countr ++ ;
}
void company::GetHall(hall& x)
{
   h[counth]= x;
   counth++;
}
int company::countr=0;
int company::counth=0;