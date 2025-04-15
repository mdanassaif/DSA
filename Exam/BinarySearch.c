

#include <stdio.h>

int main(){
	int key , arr[10], n, found = 0, low , high, mid;

	printf("How many elements you want to store == ");
	scanf("%d", &n);

	printf("Write elements to insert\n");
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);

	}


	printf("Write your element to search == ");
	scanf("%d", &key);

	low = 0;
	high = n -1;

while(low < high){
	mid = (low + high) / 2;

	if(key == arr[mid]){
		printf("Your key found at %d", mid);
		found = 1;
		break;
	} else if(key > arr[mid]){
		low = mid + 1;

	}else{
		high = mid - 1;
	}
}



	 
 

	if(!found){
		printf("Your element is not found in the array");
	}

	return 0;
}