#include <iostream>

using namespace std;

int main ()
{
	int temperature;
	cout << "Temperature: ";
	cin >> temperature;
	
	if (temperature < 32){
		cout << "Bring a heavy jacket";
	}
	else if ( temperature < 32 && temperature > 50  ){
		cout << "Bring light jaccket";
	}
	else if ( temperature >  50 ){
		cout << "Not bring any jacket";
	} 
	else {
		cout << "to bold";
	}
	return 0;
}