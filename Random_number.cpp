//display a random number in [a,b]
#include <iostream>
#include<ctime>
using namespace std;

int main() {
	int a, b, result;
	cout << "type value of a = ";
	cin >> a;
	cout << "type value of b = ";
	cin >> b;
	srand(time(NULL));
	result = rand() % (b - a + 1) - a;
	cout << "result of a random number in [a b] is " << result << endl;
	return 0;
}