#include <stdio.h>
#include <stdbool.h>
bool subset(int a[], int n, int b[], int m) {
    int freq[100001] = {0};
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }
    for(int i=0;i<m;i++){
        if(freq[b[i]]==0)
            return false;
        freq[b[i]]--;
    }
    return true;
}
int main() {
   printf("Enter size of array a: ");
    int n;
    scanf("%d", &n);
    int a[n];
    printf("Enter elements of array a: ");
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("Enter size of array b: ");
    int m;
    scanf("%d", &m);
    int b[m];
    printf("Enter elements of array b: ");
    for(int i=0;i<m;i++){
        scanf("%d", &b[i]);
    }
    if(subset(a, n, b, m)) {
        printf("b is a subset of a\n");
    } else {
        printf("b is not a subset of a\n");
    }
    return 0;
}
