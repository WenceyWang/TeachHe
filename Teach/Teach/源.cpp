#include <iostream>
#include <string>
using namespace std;

struct Book
{
	int Key;
	string Name;
};

Book Sign ( Book a )
{
	a.Key ++;
	return a;
}

int main ( )
{
	Book g;
	g.Key = 1;
	g.Name = "sd";
	cout << g.Key << endl << g.Name;
}