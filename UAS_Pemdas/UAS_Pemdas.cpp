#include <iostream>
using namespace std;
class MasukUniversitas {
private:
	int uangPendaftaran;
	int uangSemesterPertama;
	int uangBangunan;
	int TotalBiaya;
}

	// isi daftar variable yang dibutuhkan di bawah ini

public:
	MasukUniversitas() {
		uangPendaftaran = 0;
		uangSemesterPertama = 0;
		uangBangunan = 0;
		uangTotalBiaya = 0;
		// isi nilai default variable yang dibutuhkan di bawah ini
	}
	virtual void namaJalurMasuk() {
		cout << name << "SNBT" << endl;
		cout << name << "SNBP" << endl;
		return;
	}
}


	// isi disini dengan fungsi virtual yang dibutuhkan
	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = nilai;
	}
	float getUangPendaftaran() {
		return uangPendaftaran;
	}
	float getUangSemesterPertama() {
		return uangSemesterPertama;
	}
	float getUangBangunan() {
		return uangBangunan;
	}
	float getTotalBiaya() {
		return TotalBiaya;
	}
	// isi setter dan getter variable yang dibutuhkan di bawah ini
};
class SNBT : public MasukUniversitas {
public:
	void namaJalurMasuk() {
		cout << "SNBT" << endl;
	}

	void masukanUangSemester() {
		cout << "Masukan uang semester untuk SNBT" << endl;
	}
};

	
	// isi disini untuk melengkapi class SNBT

class SNBP : public MasukUniversitas {
public:
	void namaJalurMasuk()  {
		cout << "SNBP" << endl;
	}

	void masukanUangSemester() {
		cout << "Masukan uang semester untuk SNBP" << endl;
	}
};
	int main() {
		int pilihan;
		do {

			system("CLS");
			cout << "Pilih Jalur Masuk" << endl;
			cout << "1. SNBT" << endl;
			cout << "2. SNBP" << endl;
			cout << "3. Keluar" << endl;
			cout << "Masukan pilihan" << endl;
			cin >> pilihan;

			switch (pilihan)
			{

			case 1:

				cout << "Masukan Uang Pendaftaran" << endl;
				system("pause");
				break;

			case 2:
				cout <<
					system("pause");
				break;
			case 3:
				cout <<
					system("pause");
				break;


			}




			// isi disini untuk fungsi main
}