// Print this 
//       *
//     * * *
//   * * * * *
// * * * * * * *

#include <iostream>
using namespace std;

int main(){
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for(int i = 0; i <= rows; i++){
        for(int j = 1; j <= rows-i; j++){
            cout << "  ";
        }

        for(int k = 0; k < 2*i-1; k++){
            cout << "* ";
        }
        cout << endl;
    }
}