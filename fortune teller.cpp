#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <windows.h>
using namespace std;
int main(){
	srand(time(NULL));
	
const	char* fortunes[]={
	"You will find great success in your career.",
    "A new opportunity will present itself in the near future.",
    "Love is just around the corner.",
    "Financial abundance is coming your way.",
    "Travel will broaden your horizons.",
    "A lifelong dream will soon become a reality.",
    "Be cautious of a new acquaintance.",
    "Your hard work will pay off soon.",
    "Family will play an important role in your life.",
    "A pleasant surprise awaits you."
	};
	
	int index= rand() % sizeof(fortunes) / sizeof(fortunes[0]);
	cout<<"Welcome to Fortune Teller"<<endl;
	cout<<"-------------------------"<<endl<<endl;
	int no;
	cout<<"Enter 1 for your fortune: "; cin>>no;
	
	if(no==1){
		system("cls");
		cout<<"I will predict your fortune"<<endl;
		for(int i=0; i<=7; i++){
			cout<<"...";
			Sleep(1500);
		}
		cout<<"\nYour Fortune: "<<fortunes[index]<<endl<<endl;
	}
}
