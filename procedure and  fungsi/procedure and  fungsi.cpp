#include <iostream>
using namespace std;

int panjang, Lebar;

void inputdata() {
	cout << "Masukan Nilai Panjang : ";
	cin >> panjang;
	cout << "Masukan Nilai Lebar : ";
	cin >> Lebar;
}
int Hitungluas() {
	return panjang * Lebar;

}
void Luas() {
	cout << "Luasnya adalah : " << Hitungluas() << endl;
}


int main()
{
	inputdata();
	Hitungluas();
	Luas();

}