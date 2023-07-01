#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;

    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are: \n", start, end);

    for(i = start; i <= end; i++) {
        isPrime = 1;

        // check if i is prime
        for(j = 2; j <= i / 2; ++j) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if(isPrime == 1) {
            printf("%d\n", i);
        }
    }

    return 0;
}
