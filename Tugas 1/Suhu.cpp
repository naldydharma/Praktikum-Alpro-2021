#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float c, f, k, r;
	
	//input data
	cout << "Konversi Suhu"
		 << "\n"
		 << "---------------"
		 << "\n";
	cout << "Suhu Celcius :";
	cin  >> c;
	
	// Rumus 
	f = (c * 4 / 5);
	k = (c * 9 / 5) + 32;
	r =  c + 273;
	
	// Hasil
	cout << "Fahtenheit" << setw(3) << ": " << f << " derajat F"
		 << "\n";
	cout << "Kelvin" 	 << setw(7) << ": " << k << " derajat K"
		 << "\n";
	cout << "Reamur" 	 << setw(7) << ": " << r << " derajat R"
		 << "\n";
		 
	return 0;
}
