#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()

{
	string zona, odp, kota, prov;
	int week1, week2, death;
	
	cout << "Nama Kota :";
	getline(cin, kota);
	
	cout << "Nama Provinsi :";
	getline(cin, prov);
	
	cout << "Kasus Positif Minggu Pertama :";
	cin  >> week1;
	cout << "Kasus Positif Minggu Kedua :";
	cin  >> week2;
	cout << "Jumlah Kematian :";
	cin  >> death;
	
	(week1 > 0 || week2 > 0 || death > 0) ? odp = "x" : odp = "y";
	
	if(week2 > 0)
		zona = (death >0 && odp == "x") ? "HITAM" : "MERAH";
	else if(week2 <= 0)
		zona = (odp == "x") ? "ORANYE" : "HIJAU";
	else 
		zona = "Tidak Valid";
		
		
	cout << "\n"
		    << "Wilayah " << kota << " Provinsi " << prov << ":"
		    << "\n";
	cout <<	"Kasus Minggu Pertama :" << week1 << " Orang"
			<< "\n";
	cout <<	"Kasus Minggu Kedua :" << week2 << " Orang"
			<< "\n";
	cout <<	"Jumlah Kematian :" << death << " Jiwa"
			<< "\n";
	cout << "Status Zona :" << zona << "\n\n";
	
	
	return 0;	
	
}
