#include <iostream>
#include <string>
using namespace std;
string board = "123456789";
int main () {
	bool first = true;
	//{'1','2','3','4','5','6','7','8','9','\0'}	;
	char input = 'a';
	int convert = 0;
	string X = "";
	string O = "";
	string wins[] = {"123","456","789","147","258","369","159","357"};
	while(true){
		cout << "- - - - -" << endl;
		cout << "|";
		for(int i = 0; i < 3; i++){
			cout << " " << board[i] << "|";
		}
		cout << endl;
		cout << "- - - - -" << endl;
		cout << "|";
		for(int i = 3; i < 6; i++){
			cout << " " << board[i] << "|";
		}
		cout << endl;
		cout << "- - - - -" << endl;
		cout << "|";
		for(int i = 6; i < 9; i++){
			cout << " " << board[i] << "|";
		};
		cout << endl;

		cout << "enter a number 1-9 to choose the location" << endl;
		bool prompt = true;
		while(prompt){
			cin >> input; // it is a char
			convert = input - 48;// to convert into an int
			if(convert < 10 && convert > 0 && board[convert-1] != 'X' && board[convert-1] != 'O'){
				prompt = false;
			}
			else{
				cout << "bitch choose a right number" << endl;
			}
		}

		if('g' == input){
			break;
		}
		else{
			if(true == first){
				X += board[convert-1];
				board.replace(convert-1, 1, "X");
				first = false;
			}
			else{
				O += board[convert-1];
				board.replace(convert-1, 1, "O");
				first = true;
			}
		}
		int check = 0;
		for(int i = 0; i < 8; i++){
			for(int j = 0; j < 3; j++){
				for(int y = 0; y<X.length();y++){
					if(wins[i][j] == X[y])
						check += 1;
				}
			}
			if(check == 3){
				cout << "X wins" << endl;
				return 0;
			}
			check = 0;
		}
		check = 0;
		for(int i = 0; i < 8; i++){
			for(int j = 0; j < 3; j++){
				for(int y = 0; y<O.length();y++){
					if(wins[i][j] == O[y])
						check += 1;
				}
			}
			if(check == 3){
				cout << "O wins" << endl;
				return 0;
			}
			check = 0;
		}
	}

	return 0;
}