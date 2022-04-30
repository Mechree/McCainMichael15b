// Michael McCain
// CIS 1202
// 04/30/2022

#include <iostream>
#include <string>

using namespace std;

// prototypes

template<typename INT>
void Half(INT num)
{

}

template<typename FLOAT>
void Half(FLOAT num)
{

}

template<typename DOUBLE>
void Half(DOUBLE num)
{

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