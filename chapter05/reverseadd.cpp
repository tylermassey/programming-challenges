// reverse and add
#include <iostream>
using namespace std;

long int reverse(long int n) {
	long int reverse = 0;
	while( n!=0) {
		reverse = reverse * 10;
		reverse = reverse + n%10;
		n = n/10;
	}
	return reverse;
}

int main() {
	int cases;
	long n;
	cin >> cases;
	while(cases--) {
		int count = 1;
		cin >> n;
		n+=reverse(n);
		while(n != reverse(n)) {
			n+=reverse(n);
			count++;
		}
		cout << count << " " << n << endl;	
	}
	return 0;
}