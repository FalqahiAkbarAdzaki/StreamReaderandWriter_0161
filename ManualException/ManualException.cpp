#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "Selamat Belajar di Prodi TI UMY" << endl;
		cout << "Pertanyaan tidak akan dieksekusi" << endl;
	}
	catch (int a) {
		cout << "Pengecualian akan dieksekusi" << endl;
	}
	catch (...) {
		/*jika selain integer maka block ini akan dieksekusi*/
		cout << "default Pnegecualian dieksekusi" << endl;
	}
}