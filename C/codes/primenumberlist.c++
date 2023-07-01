#include <iostream>
using namespace std;

int main() {
    int i, j, start, end, isPrime;

    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    cout << "List of prime numbers between " << start << " and " << end << ":" << endl;

    for(i = start; i <= end; i++) {
        isPrime = true;
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime) cout << i << endl;
    }

    return 0;
}
