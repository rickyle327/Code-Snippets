#include <iostream>
#include <xtgmath.h>
#include <algorithm>
#include <vector>

using namespace std;

bool checkPrime(unsigned long long num) {
	unsigned long long half = num;

	for (unsigned long long i = 2; i < num; i++) { //Check all numbers from 2 to sqrt(num) + 1 (+1 for redundancy)
		if (num % i == 0)
			return false;
	}

	return true;
}

int main()
{
	unsigned long long num = 600851475143; //Set number
	unsigned long long rt = sqrt(num); //Set number square root
	vector<unsigned long long> primeFacs;


	for (unsigned long long i = 2; i <= rt + 1; i++) {

		if (num % i == 0) {
			if (checkPrime(i) == true) {
				primeFacs.push_back(i);
				cout << i << " pushed back to vector." << endl;
			}
		}
	}

	unsigned long long maxPrime = *max_element(primeFacs.begin(), primeFacs.end());

	cout << "The largest prime number is: " << maxPrime << endl;;

	return 0;

}