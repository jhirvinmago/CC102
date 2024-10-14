#include <iostream>
using namespace std;

int main()
{
	double sugarPriceUSD = 0.00, ricePricePound = 0.00, sardinesPricePound = 0.00, coffeePriceUSD = 0.00, milkPriceUSD = 0.00;
	
	cout << "enter the quantity of sugar ( USD )\t\t:";
	cin >> sugarPriceUSD;
	cout << "enter the quantity of rice ( Pound )\t\t:" ;
	cin >> ricePricePound;
	cout << "enter the quantity of sardines ( pound )\t:" ;
	cin >> sardinesPricePound;
	cout << "enter the quantity of coffee ( USD )\t\t:" ;
	cin >> coffeePriceUSD;
	cout << "enter the quantity of milk ( USD )\t\t:" ;
	cin >> milkPriceUSD;
	
	cout << " purchase: " << sugarPriceUSD << " of sugar" << endl;
	cout << " purchase: " << ricePricePound << " of rice" << endl;
	cout << " purchase: " << sardinesPricePound << " of sardines" << endl;
	cout << " purchase: " << coffeePriceUSD << " of coffee" << endl;
	cout << " purchase: " << milkPriceUSD << " of milk" << endl;
	
	sugarPriceUSD = sugarPriceUSD * 55.98;
	ricePricePound = ricePricePound * 24.13;
	sardinesPricePound = sardinesPricePound * 47.07;
	coffeePriceUSD = coffeePriceUSD * 55.98;
	milkPriceUSD = milkPriceUSD * 55.98;
	
	sugarPriceUSD = sugarPriceUSD * 21.14;
	coffeePriceUSD = coffeePriceUSD * 5.59;
	milkPriceUSD = milkPriceUSD * 4.02;
	
	double totalCostPHP = 0.00;
	totalCostPHP = sugarPriceUSD + ricePricePound + sardinesPricePound + coffeePriceUSD + milkPriceUSD;
	
	cout << "total cost php\t\t\t\t\t:" << totalCostPHP << endl;
	return 0;
}
