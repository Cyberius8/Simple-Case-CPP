//pool entrace//
/*memberi gratis kepada anak dibawah 7 tahun
dan membayar kepada orang lebih dari 7 tahun*/

#include <iostream>
using namespace std;
int main()
{
	int age;
	cout << "umur : "; cin >> age;
	if (7>age)
	cout << "tidak bayar"<<endl;
	if (7<age)
	cout << "bayar 15k"<<endl;
	return 0;
}
