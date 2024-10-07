#include <iostream>

using namespace std;

main()
{
	double USDDollar, Php, convertion;
	
	USDDollar = 56.5;
	
	cout << "dollar :";
	cin >> Php;
	
	Php = Php * USDDollar;
	
	cout << "php :" << Php << endl;
	
	Php = 56.5;
	
	cout << "Php :";
	cin >> Php;
	USDDollar = Php / USDDollar;
	
	cout << "dollar : " << USDDollar << endl;

	return 0;
}
