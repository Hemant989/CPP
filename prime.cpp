#include <iostream>

using namespace std;

int main() {
    int n, div = 2;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 2)
     {
        cout << "Not prime" << endl;
     }
     else
     {
        while (div < n) {
            if (n % div == 0) {
                cout << "Not prime" << endl;
                return 0; 
            }
            div++;
        }
        cout << "Prime" << endl;
     }

    return 0;
}
