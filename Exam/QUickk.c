#include <stdio.h>
int divide(int[], int, int);
void quick(int[], int, int);


int main() {
    int arr[10];
    int left, right, n;

    printf("How many elements you want? == ");
    scanf("%d", &n);

    printf("Write elements to insert:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Before sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    left = 0;
    right = n - 1;

    quick(arr, left, right);

    printf("\nAfter sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void quick(int arr[], int left, int right){

	int j;
	if(left < right){
		j = divide(arr, left, right);

		quick(arr, left, j -1);
		quick(arr, j+1, right);
	}

}

int divide(int arr[], int left, int right){

	int pivot = arr[left];
	int i = left; 
	int j = right;
	int temp;





	if(i < j){
		while(arr[i] <= pivot && i < right)
			i++;
		while(arr[j] > pivot)
			j--;

		if(i < j){
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}

	temp = arr[i];
	arr[left] = arr[j];
	arr[j]= temp;

}

