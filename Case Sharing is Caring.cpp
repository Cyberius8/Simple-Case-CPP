//sharing is caring//
/* david dan alex punya aquarium
di david ada 8 ikan pelangi
di alex ada 11 ikan angel
bantu mereka bertukar*/
#include <iostream>
using namespace std;
int main()
{
	int AD = 8;
	int AA = 11;
	int ANew = AD;
	AD = AA;
	AA = ANew;
	cout << "David's Aquarium is "<<AD<<endl;
	cout << "Alex's Aquarium is "<<AA<<endl;
	return 0;
}
