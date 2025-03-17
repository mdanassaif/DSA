#include <stdio.h>

int divide(int[], int, int);
void quick(int[], int, int);   

int arr[20] = {5, 1, 8, 2, 9, 3};
int i, n;

int main() {
    int left, right;

    printf("Enter number of elements\n");
    scanf("%d", &n);

    left = 0; 
    right = n - 1;
    printf("Before sort\n");

    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);  
    }
    printf("\n"); 
    
    quick(arr, left, right);

    printf("After Sorting\n");

    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]); 
    }
    printf("\n");   
    return 0;  
}

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