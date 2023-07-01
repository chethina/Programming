#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int i, j, start, end;
    ofstream outFile;
    outFile.open("prime_numbers.txt");

    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    cout << "List of prime numbers between " << start << " and " << end << ":" << endl;
    outFile << "List of prime numbers between " << start << " and " << end << ":" << endl;
    for(i = start; i <= end; i++) {
        bool isPrime = true;
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime) {
            cout << i << endl;
            outFile << i << endl;
        }
    }
    outFile.close();
    return 0;
}
