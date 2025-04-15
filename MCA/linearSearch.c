#include <stdio.h>
// #include <conio.h>

int arr[20], key, n;

int main(){
    int i;
    printf("Enter no of your element\n");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Enter elem no %d ",i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter Search Element\n");
    scanf("%d", &key);

    for(i = 0; i < n; i++){
        if(arr[i] == key){
            printf("Key found at %d", i);
            break;
        }
    }

    if(i == n){
        printf("Key not found");
    }
}