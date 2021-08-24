#include <iostream>
#include <cmath>

int main() {
	double a = 0, b = 0, c = 0;
	
	std::cout << "Kerem a harom oldal hosszat cm-ben" << std::endl;
	std::cin >> a >> b >> c;

	double keruletfele = (a + b + c) / 2;
	double kerulet = a + b + c;
	double terulet = sqrt(keruletfele*((keruletfele - a) * (keruletfele - b) * (keruletfele - c)));

	std::cout << "A haromszog terulete: " << terulet << " cm" << std::endl;
	std::cout << "A haromszog kerulete: " << kerulet << " cm" << std::endl;
}