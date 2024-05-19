#include <bits/stdc++.h>
using namespace std;

class Country
{
public:
	char name[20];
	int area, population;

public:
	Country(char n[],int a, int p)
	{
		n = name;
		a = area;
		p= population;
	}

	char getX()
	{
		return name;
	}
	int getY()
	{
		return area;
	}
	int getZ()
	{
		return population;
	}
};

int main()
{
    char a[20];
    int x,y;
    cin>>a,x,y;
	// Constructor called
	Country p1(a,x,y);

	// Access values assigned by constructor
	cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();

	return 0;
}

