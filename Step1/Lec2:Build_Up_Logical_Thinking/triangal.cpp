// printing the pattrans in triangle format

#include<iostream>
using namespace std;
int main(){
    int a;
    cout << " Enter the 'n' value " << endl;
    cin >> a;

    for(int i = 0; i < a; i++){
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

