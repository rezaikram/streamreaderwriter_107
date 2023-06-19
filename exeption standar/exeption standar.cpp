#include <iostream>
#include <exception>
//untuk objek exception yang akan digunakan
#include <array>
//untuk objek array yang akan kita gunakan
using namespace std;

int main()
{
	cout << "Awal Program" << endl; //penanda 1:...
	try {
		array<int, 3> data = { 1, 2, 3 };
		//pesan arrray integer 3 element
		//cout <<data.at(5)<<endl;
		///memanggil array elemen ke 5
	}
	catch (exception& e) {
		//penangkap menggunakan objek exception
		cout << e.what() << endl;
		/*akan dieksekusi karna array data hanya memiliki 3 elemen*/
	}
	cout << "Baris program yang terakhir" << endl;
	/*penanda 2: bahwaw program berjalan tanpa berhenti meskipun terjadi kesalahan*/
	return 0;
}