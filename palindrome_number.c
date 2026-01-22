#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(int x) {
    if (x<0) return false;
    if (x%10==0 && x!=0) return false;
    int reversed_number=0;
    while(x>reversed_number){
        reversed_number = reversed_number*10 + x%10;
        x = x/10;
    }
    return (x == reversed_number || x == reversed_number/10);
}
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }
    return 0;
}