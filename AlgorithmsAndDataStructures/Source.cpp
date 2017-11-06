#include <iostream>
#include "Complex.h"


using namespace std;


int main()
{
	float theta = 0;
	Complex t(cos(theta), sin(theta));
	cout << t << endl;

	return 0;
}