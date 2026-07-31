#include <stdio.h>
#include<math.h>
#include<math.h>


int main() {
    int n, original, rem, sum = 0, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        n /= 10;
        digits++;
    }

    n = original;

    while (n != 0) {
        rem = n % 10;
        int power = 1;

        for (int i = 0; i < digits; i++) {
            power *= rem;
        }

        sum += power;
        n /= 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number\n", original);
    else
        printf("%d is not an Armstrong number\n", original);

    return 0;
}
