#include <stdio.h>
// #include <conio.h>


int arr[10];
int n;


int main(){
	printf("How many numbers you want to insert in your array == ");
	scanf("%d", &n);

	for(int i = 0; i < n; i++){
	scanf("%d", &arr[i]);
    }


     printf("Your array : \n");
    for(int i = 0; i < n; i++){
    	printf("%d\t", arr[i]);
    }

    printf("\n");

    for(int i = 0; i < n; i++){
    	for(int j = i+1; j< n ; j++){
    		if(arr[i] > arr[j]){
    			int temp = arr[i];
    			arr[i] = arr[j];
    			arr[j] = temp;
    		}

    	}
    }

    printf("Your array becomed sorted\n");
    for(int i =0; i < n; i++){
    	printf("%d\t", arr[i]);
    }
}