#include <stdio.h>

int divide(int[], int, int);
void quick(int[], int, int);   

int main() {
    int arr[20];  // Max size 20
    int i, n, left, right;

    printf("Enter number of elements (max 20): ");
    scanf("%d", &n);

    if (n > 20) {
        printf("Error: Maximum array size is 20\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    left = 0; 
    right = n - 1;
    printf("Before sort: ");
    
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);  
    }
    printf("\n"); 
    
    quick(arr, left, right);

    printf("After Sorting: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]); 
    }
    printf("\n");   
    return 0;  
}

// quick() and divide() functions remain the same
void quick(int arr[], int left, int right) {
    int j;
    if(left < right) {
        j = divide(arr, left, right);
        quick(arr, left, j-1);
        quick(arr, j+1, right);  
    }
}

int divide(int arr[], int left, int right) {
    int pivot = arr[left];   
    int temp;              
    int i = left;
    int j = right;

    while(i < j) {
        while(arr[i] <= pivot && i < right)
            i++;
        while(arr[j] > pivot)
            j--;

        if(i < j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    
    temp = arr[left];
    arr[left] = arr[j];
    arr[j] = temp;
    
    return j;
}