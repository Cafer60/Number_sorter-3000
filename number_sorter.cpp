#include <iostream>
#include <vector>
#include <windows.h>

using namespace std;

void theme(char color);
void menu ();
void sorting();

int main(){
	bool again = 1;
	do{
		char menuChoise = 0,color;//to use the menu
		while(menuChoise != '1' && menuChoise != '2' && menuChoise != '3'){//control
			menu();
			cin >> menuChoise;
		}
		if (menuChoise == '3'){
			again = 0;
		}
		else if(menuChoise == '2'){//to choose theme
			system("CLS");
			cout << "Select theme : \n";
			cout << "1 - Green Hacker Mode\n";
			cout << "2 - Blue Cool Mode\n";
			cout << "3 - Red Alert Mode\n";
			cout << "Select theme: ";
			cin >> color;
			while(color != '1' && color != '2' && color != '3'){
   				cout << "Invalid choice. Try again: ";
   				cin >> color;
			}		
			cout << "Theme is changed successfully\n";
			system("pause");
			system("CLS");
		}
		else{//...and to sort
			sorting();
		}
	}while(again);
} 

void theme (char color){
	if(color == '1')
		system("color 0A");
	if(color == '2')
		system("color 0B");
	if(color == '3')
		system("color 0E");
}

void menu(){
		system("CLS");
		cout << "***********************************\n";
		cout << "   Welcome to Number Sorter 3000   \n";
		cout << "***********************************\n";
		cout << "1 - Sort numbers\n";
		cout << "2 - Change Theme\n";
		cout << "3 - Exit\n";
}

void sorting(){
	char sortChoise = 0;
	system("CLS");
	int x,n;
	cout << "How many numbers do you want to sort :  ";
	cin >> n;
	system("CLS");
	vector<int> numbers(n);
	for(int i = 0; i < n; i++){//to take numbers
		cout << "Enter number " << i+1 << " : "  ;
		cin >> numbers[i];
	}
	while(sortChoise != '1' && sortChoise != '2'){//control
		cout << "What kind of sorting do you want? (1 = Big to Small, 2 = Small to Big): ";
		cin >> sortChoise;
	}
	if(sortChoise == '1'){//sorting big to small
		for(int j = 0; j < n; j++){
			for(int i = 0; i < n-1; i++){
					if(numbers[i] < numbers [i+1]){
						x = numbers[i];
						numbers[i] = numbers [i+1];
						numbers[i+1] = x; 
					}
				}
			}
		}
		else{//sorting small to big
			for(int j = 0; j < n; j++){
				for(int i = 0; i < n-1; i++){
					if(numbers[i] > numbers [i+1]){
						x = numbers[i];
						numbers[i] = numbers [i+1];
						numbers[i+1] = x; 
					}
				}
			}
		}
	system("CLS");
	cout << "Sorted numbers : \n";//print sorted numbers
	for(int i = 0; i < n; i++){
		cout << numbers[i] << "  ";
	}
	cout << endl;
	cout <<"---------------\n";
	system("pause");
}



