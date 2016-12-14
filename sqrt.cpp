#include<iostream>
#include<cmath>
int main()
{
	using namespace std;
	double area;
	cout << "Enter the area of you home: ";
	cin >> area;
	double side;
	side = sqrt(area);
	cout << "You home's side is:" << side << endl;
	return 0;
}
