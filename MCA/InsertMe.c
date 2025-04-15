#include <stdio.h>

int main() {
    int arr[4];

    printf("Write the elements\n"); 
    for(int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array Before Sorting\n"); 
    for(int i = 0; i < 4; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

  
    for(int i = 1; i < 4; i++) {
        int temp = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }

    printf("Array After Sorting\n"); 
    for(int i = 0; i < 4; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");  

    return 0;  
}