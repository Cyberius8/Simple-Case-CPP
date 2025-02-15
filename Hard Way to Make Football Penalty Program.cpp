#include <iostream>
using namespace std;

int main(){
	bool x;
	do{
	string won="siuuuu";
	string* ptr=&won;
	string lose="suiiii";
	string* ptrr=&lose;
	int shoot,save;
	cout<<"Pilih"<<endl;
	cout<<"1. Kiri"<<endl;
	cout<<"2. Kanan"<<endl;
	cout<<"3. Tengah"<<endl;
	cout<<"Pilih : ";cin>>shoot;
	save=rand()%3;
	shoot= shoot%3;
	if(shoot==save){
		cout<<save<<endl;
		cout<<lose;
		x=false;
	}else{
		cout<<save<<endl;
		cout<<won;
		x=true;
}	
	}while(x=true);
}