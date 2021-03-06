//============================================================================
// Name        : GDCByEuclideanAlgorithm.cpp
// Author      : Daniel Georiev
// Version     :
// Copyright   : Your copyright notice
// Description : Calculate the greatest common divisor(GCD) of given two numbers.
//============================================================================

#include <iostream>

using namespace std;

int gcd(int a, int b) {
  if (b == 0)
    return a;

  return gcd(b, a % b);
}

int main() {
	int a = 1079;
	int b = 1021;

	//cin >> a ;
	//cin >> b ;

	int result = gcd(a,b);

	cout << result << endl;


	return 0;
}
