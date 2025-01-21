//print the pattern
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

#include<iostream>
using namespace std;

int main(){
    int rows, columns;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

    for( int i = 0; i< rows; i++){
        for(int j = 0; j<columns; j++){
            cout <<"* ";
        }
        cout << endl;
    }

    cout << endl;

    for( int i = 1; i<= rows; i++){
        for(int j = 1; j<=columns; j++){
            cout <<j << " ";
        }
        cout << endl;
    }

    cout << endl;

    for( int i = 1; i<= rows; i++){
        for(int j = 1; j<=columns; j++){
            cout <<i << " ";
        }
        cout << endl;
    }

    cout << endl;

    for( int i = 1; i<= rows; i++){
        for(int j = 1; j<=columns; j++){
            cout <<(char) (j+64)<< " ";
        }
        cout << endl;
    }

    cout << endl;

    for( int i = 1; i<= rows; i++){
        for(int j = 1; j<=columns; j++){
            cout <<(char) (i+64)<< " ";
        }
        cout << endl;
    }

    cout << endl;

    for( int i = 1; i<= rows; i++){
        for(int j = 1; j<=columns; j++){
            cout <<(char) (j+96)<< " ";
        }
        cout << endl;
    }

    cout << endl;

    for( int i = 1; i<= rows; i++){
        for(int j = 1; j<=columns; j++){
            cout <<(char) (i+96)<< " ";
        }
        cout << endl;
    }
}