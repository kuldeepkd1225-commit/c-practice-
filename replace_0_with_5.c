#include <stdio.h>
int convertZeroToFive(int n){
    if(n ==0){
        return 5;
    }
    int result = 0;
    int place =1;
    while(n > 0){
        int digit =n%10;
        if(digit ==0){
            digit =5;
        }
        result = result+ digit*place;
        place*=10;
        n/=10;
    }
    return result;
}
int main(){
    int n;
    printf("Entre a number: ");
    scanf("%d",&n);
    int convertedNumber = convertZeroToFive(n);
    printf("the converted number is: %d",convertedNumber);
    return 0;
}
