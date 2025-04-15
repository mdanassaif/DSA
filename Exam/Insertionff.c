 #include <stdio.h>

int main(){

int index, min;
int n;
int temp;
int arr[10];
	printf("How many elements you want to insert == ");
	scanf("%d", &n);

	for(int i =0; i < n; i++){
		scanf("%d", &arr[i]);
	}

    printf("no sorted array");
	for(int i =0; i < n; i++){
		printf("%d", arr[i]);
	}

    for(int i = 0; i < n - 1; i++){
    	min = arr[i]; 
    	index = i;

    	for(int j = i + 1; j < n; j++){
    		if(arr[j]< min){
    			min = arr[j];
    			index = j;

    		}
    	}

    	temp = arr[i];
    	arr[i] = arr[index];
    	arr[index] = temp;

    }

    printf("sorted array");
	for(int i =0; i < n; i++){
		printf("%d", arr[i]);
	}
}


 