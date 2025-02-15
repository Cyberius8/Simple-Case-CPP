//transportation//
/*buat program bus
bus maksimal bisa mengantar 50 orang
orang yang menunggu sebagai input
perlu menghitung dan mencari
berapa banyak kursi kosong sebagai output*/
#include <iostream>
using namespace std;
int main ()
{
	int wait;
	int empty;
	int sisa;
	int tempt;
	cout << "berapa banyak yang nunggu "; cin >> wait;
	sisa = wait %50;
	empty = 50 - sisa;
	tempt = wait / 50;
	cout << "berapa kali ngetempt "<<tempt<<endl;
	cout << "banyak kursi kosong yang tersisa adalah " << empty<<endl;
	return 0;
	
}
