#include<iostream>
using namespace std;
//nyari max ganti 0
//nyari min ganti 0
//gitu trs sampe mentok
//klo genap kita seleksi selain 0 maka ditambahin dan dibagi 2
//klo ganjil kita seleksi selain 0
void tampilan(int array[],int length);
int max(int array[],int length);
int min(int array[],int length);
void ganti(int array[],int length);
void median(int array[],int length);
void hasil(int array[],int length);

int main(){
	int size=6;
	int data[] = {24,17,31,55,76,6};
	int maximum = max(data,size);
	int minimum = min(data,size);
	tampilan(data,size);
	median(data,size);
	cout<<endl;
	cout<<maximum<<endl;
	cout<<minimum;
	return 0;
}

void tampilan(int array[],int length){
	for(int i = 0;i < length;i++){
		cout<<array[i]<<",";
	}
	cout<<endl;
}

int max(int array[],int length){
	int temp=0;
	for(int i = 0;i < length;i++){
		if(array[i] > temp){
			temp = array[i];
		}
	}
	return temp;
}

int min(int array[],int length){
	int temp=100;
	for(int i = 0;i < length;i++){
		if(array[i] < temp){
			if(array[i]!=0){
				temp = array[i];
			}
		}
	}
	return temp;
}

void ganti(int array[],int length){
	for(int i = 0;i < length;i++){
		if(max(array,length) == array[i]){
			array[i] = 0;
		}
		if(min(array,length) == array[i]){
			array[i] = 0;
		}
	}
}

void median(int array[],int length){
	int jumlah = length % 2;
	int kali = 0;
	double sum = 0;
	if(jumlah == 0){
		int kali = (length/2)-1;
		for(int i = 0;i < kali;i++){
			ganti(array,length);
		}
		for(int i = 0;i < length;i++){
			sum += array[i];
		}
		tampilan(array,length);
		sum /= 2;
		cout<<sum;
	}
	else{
		int kali = length/2;
		for(int i = 0;i < kali;i++){
			ganti(array,length);
		}
		for(int i = 0;i < length;i++){
			sum += array[i];
		}
		tampilan(array,length);
		cout<<sum;
	}
}