#include <stdio.h>

int arr[20], key, low, high, mid, i, n;

int main() {
    int i;
    printf("Enter no of your element == ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter elem no %d ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter Search Element == ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) {  
        mid = (low + high) / 2;
        if (key == arr[mid]) {
            printf("Key Found at %d\n", mid + 1);  
             break;  
        } else if (key > arr[mid]) {
            low = mid + 1;
        } else {  
            high = mid - 1;
        }
    }

    printf("Element not found\n");  

    return 0;
}