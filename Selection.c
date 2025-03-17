#include <stdio.h>

int main() {
    int arr[4];
    int temp, min, index;
    
    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);  
    }
    
    printf("----------------------------------------------------\n");
    printf("Before Sorting Array Look Like this : ");
   
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);  
    }
    printf("\n----------------------------------------------------\n");
    
 
    for (int i = 0; i < 4 - 1; i++) {
        min = arr[i];    
        index = i;     
        
        for(int j = i + 1; j < 4; j++) {  
            if(arr[j] < min) {           
                min = arr[j];
                index = j;
            }
             for (int i = 0; i < 4; i++) {
             printf("%d  ", arr[i]);  
    }
 printf("\n-------------\n");  
        }

           

        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;

     
       
    }
    
    printf("\n---------------------------------------------------\n");
    printf("After Sorting Array Look Like this : ");
   
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);  
    }
    printf("\n----------------------------------------------------");
    
    return 0;
}