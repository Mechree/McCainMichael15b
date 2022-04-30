// Michael McCain
// CIS 1202
// 04/30/2022

#include <iostream>

using namespace std;

// prototypes

int Half(int num)
{
	num = static_cast<float>(num);
	num = round(num / 2);
	num = static_cast<int>(num);
	return num;
}

template<typename DF> 
DF Half(DF num)
{
	return num / 2.0;
}

int main()
{
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << Half(a) << endl;
	cout << Half(b) << endl;
	cout << Half(c) << endl;



	// end
	cout << endl << endl;
	system("pause");
	return 0;
}