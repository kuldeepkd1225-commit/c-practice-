#include <stdio.h>
int* plusOne(int* digits, int digitsSize, int* returnSize) {
   for(int i= digitsSize-1;i>=0;i--){
    if(digits[i]!=9){
        digits[i]++;
        *returnSize = digitsSize;
        return digits;
    }
    digits[i]=0;
   }
   int* result = (int*)malloc((digitsSize +1)*sizeof(int));
   result[0]=1;
   for(int i=1;i<=digitsSize;i++){
    result[i]=0;
   }
   *returnSize = digitsSize +1;
   return result;
}
int main(){
    int digitsSize;
    printf("Enter the size of the digits array: ");
    scanf("%d", &digitsSize);
    int digits[digitsSize];
    printf("Enter the digits : ");
    for(int i=0;i<digitsSize;i++){
        scanf("%d", &digits[i]);
    }
    int returnSize;
    int* result = plusOne(digits, digitsSize, &returnSize);
    printf("Result after adding one: ");
    for(int i=0;i<returnSize;i++){
        printf("%d ", result[i]);
    }
    return 0;
}
