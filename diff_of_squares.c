#include <stdio.h>
#include <stdlib.h>

int diff_of_squares(int n) {
    int sum_of_squares = 0;
    int square_of_sum = 0;
    for (int i = 1; i <= n; i++) {
        sum_of_squares += i * i;
        square_of_sum += i;
    }
    square_of_sum *= square_of_sum;
    return square_of_sum - sum_of_squares;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n<=0){
        printf("Please enter a positive integer.\n");
    }
    printf("Difference of squares: %d\n", diff_of_squares(n));
    return 0;
}