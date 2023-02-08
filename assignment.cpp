#include <iostream>
using namespace std;

int main()
{
	int workhours = 50;
	int regularhours = 40; 
	int overtimehours;
	float regularrate = 18.25;
	float overtimerate = 27.78;
	float total_wage;

	overtimehours = workhours - regularhours ;
	total_wage = (overtimehours * overtimerate) + (regularhours * regularrate);
	cout << "Total wage: " << total_wage << endl;
}
