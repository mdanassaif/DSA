#include <stdio.h>


int n;
int arr[10];

int main(){

	printf("How many elements you want to insert == ");
	scanf("%d", &n);

	for(int i =0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	

    printf("no sorted array");
	for(int i =0; i < n; i++){
		printf("%d", &arr[i]);
	}

     /// arr = [ 34, 10, 43, 22, 11];

	for(int i = 1; i < n; i++){
		int key = arr[i];
		int j = i -1;

		while( j >= 0 && arr[j] > key){
			arr[j+1] = arr[j];
			j--;
		}

		arr[j+1] = key;

	}

	for(int i = 1; i < n; i++){
		int key = arr[i];
		int j = i -1;

		while( j >= 0 && arr[j] > key){
			arr[j+1] = arr[j];
			j--;
		}

		arr[j+];
	}



 for(int i = 1; i < n; i++){
 	int key = arr[i];
 	int j = i -1;

 	while(j >= 0 && arr[j] > key){
 		arr[j+1] = arr[j];
 		j--;
 	}

 	arr[j+1] = key;
 }

    printf("sorted array");
	for(int i =0; i < n; i++){
		printf("%d", &arr[i]);
	}
}


 