#include<iostream>
using namespace std;

char before(char x){
	if (int(x) < 65|| int(x) > 90) {
		return '0';
	}else {
		if( x == 65){
			return 'z';
		}
		return x-1;
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
