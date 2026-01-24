#include <stdio.h>
char* longestCommonPrefix(char** strs, int strsSize) {
    if(strsSize ==0) return "";
    for (int i=0;strs[0][i]!='\0';i++){
        char c=strs[0][i];
        for(int j=0;j<strsSize;j++){
            if(strs[j][i] != c|| strs[j][i] == '\0'){
            strs[0][i]='\0';
            return strs[0];
            }
        }
    }
    return strs[0];
}
int main() {
    int n;
    char strs[100][100];
    char* arr[100];
    printf("Enter number of strings: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        scanf("%s", strs[i]);
        arr[i] = strs[i];
    }
    printf("Longest Common Prefix: %s\n", longestCommonPrefix(arr, n));
    return 0;
}
