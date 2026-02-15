#include <stdio.h>
int elementAtIndex(int arr[], int size, int key) {
    if (key < 0 || key >= size) {
        printf("Index out of bounds.\n");
        return -1; 
    }
    return arr[key];
}