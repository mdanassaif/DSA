#include <stdio.h>

int divide(int[], int, int);
int quick(int[], int, int);

int main(){
	int n, arr[20];

   printf("Tell me how many elements you want to store == ");
   scanf("%d", &n);

   printf("Write your %d numbers to insert into array\n", n);
   for (int i = 0; i < n; ++i)
   {
   	scanf("%d", &arr[i]);
   }

   printf("Your array is become : ");
   for (int i = 0; i < n; ++i)
   {
   	printf("%d\t", arr[i]);
   }


   /// real logic of quickSort

   quick(arr, 0, n-1);



   printf("Your array is become after quick sorting: ");
   for (int i = 0; i < n; ++i)
   {
   	printf("%d\t", arr[i]);
   }
}

void quick(int arr[], int left, int right){
	int j;
	if(left<right){
		j = divide(arr, left, right);
		quick(arr, left, j-1);
		quick(arr, j+1, right);
	}
}

int divide(int arr[], int left, int right){
	int pivot = arr[left];
	int temp;
	int i = left;
	int j = right;

	while(i < j){
		while(arr[i] <=pivot && i < right)
			i++;
		while(arr[j] > pivot)
			j--;

		if(i < j){
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}

	temp = arr[left];
	arr[left] = arr[j];
	arr[j] = temp;

	return j;
}










