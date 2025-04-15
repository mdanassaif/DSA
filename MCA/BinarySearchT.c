#include <stdio.h>

int arr[20], low, high, mid, key, n;

int main() {
    printf("How many elements you want to store in array == ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter Search Element == ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;
    int found = 0;   

    while(low <= high) {
        mid = (low + high) / 2;

        if(key == arr[mid]) {
            printf("Your element found at %d index\n", mid);
            found = 1;
            break;
        }
        else if(key > arr[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if(!found) {
        printf("Element not found\n");
    }

    return 0;
}