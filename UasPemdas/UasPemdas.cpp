#include <iostream>
using namespace std;


class MasukUniversitas {
	 // isi access modifier disini
public:
	int uangPendaftaran;
	// isi daftar variable yang dibutuhkan di bawah ini
	int uangSemesterPertama;
	int uangBangunan;
	int totalBiaya;
public:
	string Universitas;

	MasukUniversitas(string pUniversitas) :
		Universitas(pUniversitas) {
		cout << "universitas dibuat\n" << endl;
	}
	~MasukUniversitas() {
		cout << "universitas dihapus\n" << endl;
	}
};

public:
	MasukUniversitas() {
		uangPendaftaran = 0;
		// isi nilai default variable yang dibutuhkan di bawah ini
		uangSemesterPertama = 0;
		uangBangunan = 0;
		totalBiaya = 0;
	}

	virtual void namaJalurMasuk() { return; }
	// isi disini dengan fungsi virtual yang dibutuhkan
	virtual void namaJalurMasuk() = 0;
	virtual void namajalurmasuk() {
		cout << "SNBP" << endl;
		cout << "SNBT" << endl;
	}
	void setUangPendaftaran(int nilai) {
		uangPendaftaran = nilai;
	}
	float getUangPendaftaran() {
		return uangPendaftaran;
	}
	// isi setter dan getter variable yang dibutuhkan di bawah ini
};

class SNBT : public MasukUniversitas {
	// isi disini untuk melengkapi class SNBT
public:

	SNBT(int pNilai) :
		MasukUniversitas()
	{
		cout << "snbt dibuat\n" << endl;
	}
};

class SNBP : public MasukUniversitas {
	// isi disini untuk melengkapi class SNBP
public:

	SNBP(int pNilai) :
		MasukUniversitas()
	{
		cout << "snbp dibuat\n" << endl;
	}
};
int main() {
	// isi disini untuk fungsi main

	while (true)
	{
		cout << "\nMenu" << endl;
		cout << "1. SNBT" << endl;
		cout << "2. SNBP" << endl;
		cout << "3. Keluar" << endl;
		cout << "\nEnter your choice (1-3) : ";
	}
};