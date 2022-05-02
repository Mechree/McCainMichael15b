// Michael McCain
// CIS 1202
// 04/30/2022

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// prototypes

float Half(int num)
{
	num = static_cast<float>(num);
	num = ceil((num / 2) + 0.00000000000001);
	return num;
}

template<typename DF> 
DF Half(DF num)
{
	return num / 2.0;
}

int main()
{
	cout << fixed << setprecision(1);
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << Half(a) << endl;
	cout << Half(b) << endl;
	cout << Half(c) << endl;
	// end
	cout << endl;
	system("pause");
	return 0;
}