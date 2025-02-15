#include<iostream>
using namespace std;

int main(){
	int x=0, y=0;
	bool nice;
    char move,temp,arena[10][10]={
        {'-', '-', '-', '-', '-', '-', '-', '-', '-', '-'},
        {'|', 'O', 'O', 'O', 'O', 'O', '!', 'O', 'O', '|'},
        {'|', 'O', 'O', '#', '#', '#', '#', 'O', 'O', '|'},
        {'|', 'O', 'O', '#', 'O', 'O', 'O', 'O', 'O', '|'},
        {'|', 'O', 'O', '#', '#', '#', 'O', 'O', 'O', '|'},
        {'|', 'O', 'O', 'O', 'O', '#', 'O', 'O', 'O', '|'},
        {'|', 'O', '#', '#', '#', '#', 'O', 'O', 'O', '|'},
        {'|', 'O', '#', 'O', 'O', 'O', 'O', 'O', 'O', '|'},
        {'|', 'O', '#', '#', 'O', 'O', 'O', 'O', 'O', '|'},
        {'-', '-', '-', '#', '-', '-', '-', '-', '-', '-'},
    };

    do{
        //letak player
    	for(int i=0; i<10; i++){
    		for(int j=0; j<10; j++){
    			if(arena[i][j]=='!'){
    				x=i;
    				y=j;
				}
			}
		}
		
    	//hint
//    	system("cls");
    	cout<<"Simple Maze"<<endl;
    	cout<<"===================="<<endl;
    	cout<<"w = atas"<<endl;
    	cout<<"a = kiri"<<endl;
    	cout<<"s = bawah"<<endl;
    	cout<<"d = kanan"<<endl;
    	cout<<"Huruf Kecil"<<endl;
    	cout<<"===================="<<endl;
    	
    	//generate map
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                cout<<arena[i][j]<<" ";
            }
            cout<<endl;
        }
        
        //movement player
        cout<<"===================="<<endl;
        cout<<"Move : ";cin>>move;
        switch(tolower(move)){
        	case 'w':
        		if(arena[x-1][y]=='#'){
        			temp=arena[x][y];
        			arena[x][y] = arena[x-1][y];
        			arena[x-1][y] = temp;
        			x=x-1;
        			nice=true;
				}else{
					system("cls");
					cout<<"Loser"<<endl;
					nice=false;
				}
				break;
        	case 'a':
        		if(arena[x][y-1]=='#'){
        			temp=arena[x][y];
        			arena[x][y] = arena[x][y-1];
        			arena[x][y-1] = temp;
        			y=y-1;
        			nice=true;
				}else{
					system("cls");
					cout<<"Loser"<<endl;
					nice=false;
				}
				break;
        	case 's':
        		if(arena[x+1][y]=='#'){
        			temp=arena[x][y];
        			arena[x][y] = arena[x+1][y];
        			arena[x+1][y] = temp;
        			x=x+1;
        			nice=true;
				}else{
					system("cls");
					cout<<"Loser"<<endl;
					nice=false;
				}
				break;
        	case 'd':
        		if(arena[x][y+1]=='#'){
        			temp=arena[x][y];
        			arena[x][y] = arena[x][y+1];
        			arena[x][y+1] = temp;
        			y=y-1;
        			nice=true;
				}else{
					system("cls");
					cout<<"Loser"<<endl;
					nice=false;
				}
				break;
        	default:
        		cout<<"salah"<<endl;
        		nice=true;
		}
		
		//pemenang
    	if(arena[9][3]=='!'){
    		system("cls");
            cout<<"Winner"<<endl;
            nice=false;
        }
	}while(nice==true);
}