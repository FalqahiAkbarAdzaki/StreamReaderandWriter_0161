#include <iostream>
#include <exception>
#include <array>

using namespace std;

int main()
{
	cout << "Awal Program" << endl;
	try {
		array<int, 3> data = { 1, 2, 3 };
		//pesan array integer 3 elemen
		//cout<<data.at(5)<,endl;
		//memanggil array elemen ke 5
	}
	catch (exception& e) {
		cout << e.what() << endl;
		/*akan dieksekusi karna array data hanya memiliki 3 elemen*/
	}
	cout << "Baris Program Yang terakhir" << endl;
	/*penanada 2: nahwa program hanya berjalan tanpa berhenti meskipun terjadi kesalahan*/
}