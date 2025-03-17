#include <stdio.h>
// #include <conio.h>

int arr [20], i , key, n;

int main(){
    printf("Enter no of your element\n");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Enter elem no %d",i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter Saech Element");
    scanf("%d", &key);

    for(int i = 0; i < n; i++){
        if( arr[i] == key){
            printf("Key found at %d", i);
            break;
        }
    }

    if(i ==n){
        printf('Key not found');
    }
}