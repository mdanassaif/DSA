#include <stdio.h>

int main() {
    int arr[4];
    int temp, min, index;
    
    // Input array elements
    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);  
    }
    
    printf("----------------------------------------------------\n");
    printf("Before Sorting Array Look Like this : ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);  
    }
    printf("\n----------------------------------------------------\n");
    
    // Selection sort
    for (int i = 0; i < 4 - 1; i++) {
        min = arr[i];    
        index = i;     
        
        for(int j = i + 1; j < 4; j++) {  
            if(arr[j] < min) {           
                min = arr[j];
                index = j;
            }
        }
        
        // Swap elements
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
    

    
    printf("----------------------------------------------------\n");
    printf("After Sorting Array Look Like this : ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);  
    }
    printf("\n----------------------------------------------------\n");
    
    return 0;
}