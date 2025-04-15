

#include <stdio.h>

int main(){
	int key , arr[10], n, found = 0;

	printf("How many elements you want to store == ");
	scanf("%d", &n);

	printf("Write elements to insert\n");
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);

	}


	printf("Write your element to search == ");
	scanf("%d", &key);

	for(int i = 0; i < n; i++){
		 
			if(   arr[i] == key){
				printf("Your element found at index number %d", i);
				found = 1;
				break;
			 
	 
	}



}

	if(!found){
		printf("Your element is not found in the array");
	}

	return 0;
}