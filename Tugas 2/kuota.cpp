#include <iostream>
#include <iomanip>

using namespace std;

int main()

{
	int sp, sd, smp, sma, mhs, jml, psd, ptp;
    int tsp, tsd, tsmp, tsma, tmhs, tpsd, tptp;
	
	cout << "Menghitung Total Pengeluaran untuk Kuota Pelajar.\n";
	
	cout << "a. Siswa Paud							: 20 GB\n";
	cout << "b. Siswa SD							: 35 GB\n";
	cout << "c. Siswa SMP							: 20 GB\n";
	cout << "d. Siswa SMA							: 35 GB\n";
	cout << "e. Mahasiswa							: 35 GB\n";
	cout << "f. Mahasiswa							: 50 GB\n";
	cout << "g. Pengajar Tingkat Sekolah Dasar				: 42 GB\n";
	cout << "h. Pengajar Tingkat Tinggi					: 50 GB\n" 
		 << "\n";
	
	// Masukkan Data

	cout << "Jumlah Siswa Paud							:";
	cin  >> sp;
	cout << "Jumlah Siswa SD							" << setw(9) << ":";
	cin  >> sd;
	cout << "Jumlah Siswa SMP 							:";
	cin  >> smp;
	cout << "Jumlah Siswa SMA							:";
	cin  >> sma;
	cout << "Jumlah Mahasiswa							:";
	cin  >> mhs;
	cout << "Jumlah Pengajar di Tingkat Sekolah Dasar	" << setw(25) << ":";
	cin  >> psd;
	cout << "Jumlah Pengajar di Tingkat Tinggi" << setw (40) << ":";
	cin  >> ptp;
	
	
	tsp  = sp*20*6000;
	tsd  = sd*35*6000;
	tsmp = smp*35*6000;
	tsma = sma*35*6000;
	tmhs = mhs*50*6000;
	tpsd = psd*42*6000;
	tptp = ptp*50*6000;
	jml  = tsp+tsd+tsmp+tsma+tmhs+tpsd+tptp;
	
	cout << "\nJumlah Biaya yang Dikeluarkan : "<<"\n"<<"Rp. "<<jml<<",00";
	
	return 0;
	

}

