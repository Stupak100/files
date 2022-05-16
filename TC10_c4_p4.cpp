#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float st, rad;

int main()
{
	st = 0.0;
	do
	{
		rad = st * M_PI / 180;
		cout << "cos(" << st << ") = " << fixed << cos(rad) << endl;
		st += 10.0;
	}
	while(st!=100);
    return 0;
}


