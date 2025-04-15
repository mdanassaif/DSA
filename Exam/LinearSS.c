#include <stdio.h>


int n, arr[10], key, found = 0, low , high , mid;
int main(){

  printf("-----");
	scanf("%d", &n);


  printf("-----");
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	printf("------");
	scanf("%d", &key);


  printf("-----");
    for(int i = 0; i < n; i++){
    	while(arr[i] == key){
    		printf("Your key found at %d index", i);
    		found = 1;
    		break;
    	} 
    }

    if(!found){
    	printf("Your key doesn't found ");
    }


}