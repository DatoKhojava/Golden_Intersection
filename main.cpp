#include <iostream>
#include <math.h>
using namespace std;
 
const double goldenRatio = (1 + sqrt(5)) / 2; // golden intersection
 
// calc x
double function(double x) {
	return log(1 + x * x - cos(x)) - pow(M_E, sin(M_PI * x));
}
 
int main() {
	double a, b; // 
	cout << "Input Ends" << endl;
	cout << "a: ";
	cin>> a;
	cout << "b: ";
	cin >> b;
	double accuracy; // Accuracy with which we find a local maximum
	cout << "Inpur Eps" << endl;
	cout << "eps: ";
	cin >> accuracy;
	double x1, x2; // Points dividing the current bar in relation to the golden ratio
	while (fabs(b - a) > accuracy) {
		   x1 = b - (b - a) / goldenRatio; 
	       x2 = a + (b - a) / goldenRatio;
	       if (function(x1) <= function(x2)) // The condition for finding the maximum

	           a = x1; 
	       else 
	           b = x2;
	} // perform until we reach the specified accuracy
	cout << "(" << (a + b) / 2 << ", " << function((a + b) / 2) << ")" << endl; 
	system("pause");
	return 0;
}
