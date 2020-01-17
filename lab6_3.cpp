#include<iostream>
using namespace std;

char before(char x){
	int a;
	if (int(x) == 65) {
		a = 90;
		return a;
	}
	if (int(x) == 66){
		a = 65;
		return a;
	}
	if (int(x) == 80){
		a = 79;
		return a;
	}
	if (int(x) == 84){
		a = 83;
		return a;
	}
	if (int(x) == 90){
		a = 89;
		return a;
	}
	if ( int(x) > 90 || int(x) < 65){
		a = 48;
		return a;
	}
}

int main(){

	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
