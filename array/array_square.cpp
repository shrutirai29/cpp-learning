#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        arr[i] = (i+1) * (i+1);
    }
    cout << endl << "Elements of array are: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}