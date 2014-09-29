#include <iostream>
#include <cmath>
using namespace std;
int main ( )
{
	double a , b , c;
	cin >> a;
	cin >> b;
	cin >> c;
	double D = b*b - 4 * a*c;
	if ( D<0 )
	{
		cout << "нч╫Б" << endl;

	}
	if ( D == 0 )
	{
		cout << -b / 2 * a << endl;

	}
	if ( D > 0 )
	{
		cout << -b + sqrt ( b*b - 4 * a*c ) / 2 * a;
		cout << -b - sqrt ( b*b - 4 * a*c ) / 2 * a;
	}
	
}