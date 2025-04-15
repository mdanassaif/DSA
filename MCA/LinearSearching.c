#include <stdio.h>

int main(){


	int arr[5], findNum, found =0;

	printf("Write your elements:");
	for(int i =0; i < 5; i++){
		scanf("%d", &arr[i]);
	}

	printf("Your Array :");
	for(int i =0; i < 5; i++){
		printf("%d\t", arr[i]);
	}


	printf("Write what number you want to search == ");
	scanf("%d", &findNum);

	for(int i =0; i < 5; i++){
		if(findNum == arr[i]){
			printf("The element found at %d",i);
		}
		found = 1;
	}

	if(found){
		printf("Number not found");
	}

}