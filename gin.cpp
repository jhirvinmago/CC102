#include <iostream>

using namespace std;

int main ()
{
	char choice;
	cout << "It is raining? [y/n]: ";
	cin >> choice; 
	if ( choice == 'y') {
		cout << "get an umbrella"; 
	}
	else if( choice == 'n') {
		cout << "it is sunny ";
	}
	else {
		cout << "invalid input";
	}
	return 0;
}

