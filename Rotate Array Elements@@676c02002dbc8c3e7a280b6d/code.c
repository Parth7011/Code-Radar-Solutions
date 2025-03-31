#include <stdio.h>

// Function to rotate the array by K positions
void rotateArray(int arr[], int n, int k) {
    k = k % n; // In case K is greater than n
    while (k--) {
        int temp = arr[n-1];
        for (int i = n-1; i > 0; i--) {
            arr[i] = arr[i-1];
        }
        arr[0] = temp;
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, k;
    
    // Taking user input
  
    scanf("%d", &n);
    int arr[n];
    
    printf("%d", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &k);
    
    // Rotate the array
    rotateArray(arr, n, k);
    
    // Print the rotated array
    
    printArray(arr, n);

    return 0;
}
