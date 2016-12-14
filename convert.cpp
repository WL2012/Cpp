#include<iostream>

double convert(double);
int main()
{
	using namespace std;
	double weight;
	cout << "Enter your weight in stone: ";
	cin >> weight;
	weight = convert(weight);
	cout << "Your weight is " << weight << " pounds" << endl;
	return 0;
}

double convert(double stones)
{
	return 14 * stones;
}
	
