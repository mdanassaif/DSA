#include <stdio.h>

int main() {
    int arr[4];
    
 
    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);  
    }
    
    printf("----------------------------------------------------\n");
    printf("Before Sorting Array Look Like this : ");
   
     for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);  
    }
    printf("\n----------------------------------------------------");
    
 
    for (int i = 1; i < 4; i++) {
        int temp = arr[i];   
        int j = i - 1;       
        
 
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;    
    }
    
 
    printf("\n---------------------------------------------------\n");
    printf("After Sorting Array Look Like this : ");
   
     for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);  
    }
    printf("\n----------------------------------------------------");
    
    return 0;
}