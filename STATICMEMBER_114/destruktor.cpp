#include <iostream>
using namespace std;

class angka {
private :
	int* arr;
	int panjang;
public :
	angka(int); // Constructor
	~angka(); // Destructor
	void cetakdata();
	void isiData();
};
//Definisi member functon
angka::angka(int i) { //Counstructor
	panjang = i;
	arr = new int[i];
	isiData();
}

angka::~angka() { //Destructor
	cout << endl;
	cetakdata();
	delete[]arr;
	cout << "Alamat Array sudah dilepaskan" << endl;
}

void angka::cetakdata() {
	for(int i = 1; i <= panjang; i++){
		cout << i << "=" << arr[i] << endl;
	}
}

void angka::isiData() {
	for (int i = 1; i <= panjang; i++) {
		cout << i << "="; cin >> arr[i];
	}
	cout << endl;
}

int main() {
	angka belajarcpp(3); //Construtor Dipanggil
	angka* ptrBelajarcpp = new angka(5); //Constructor Dipanggil
	delete ptrBelajarcpp; // Destructor Dipanggil

	return 0;
}//Destructor Dipanggil
