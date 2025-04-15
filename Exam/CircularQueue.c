#include <stdio.h>

void enqueue();
void dequeue();
void display();



int front = -1;
int rear = -1;
int arr[5];
int capacity = 5;
int size= 0;
// int index;


int main(){

	int choice;
	int repeat = 1;


	printf("1. Enqueue\n");
	printf("2. Dequeue\n");
	printf("3. Display\n");



	while(repeat){
			printf("Choose your choice == ");
	scanf("%d", &choice);
		switch(choice){
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		default:
		   printf("Choose only b/w 1-3\n");	
		}

		printf("\nWould u like to continue == ");
	scanf("%d", &repeat);
	}

	

}

void enqueue(){
	if(size == capacity ){
		printf("The queue is full\n");
	}else{
		if(front == -1){front = 0;}

		rear = (rear + 1) % capacity;
		printf("Write your element to insert == ");
		scanf("%d", &arr[rear]);
		printf("Element %d enqueued\n", arr[rear]);
		size++;
	}
}

void dequeue(){
	if(size == 0){
		printf("The queue is empty");
	}else{
		printf("The dequeued element is %d\n", arr[front]);
		front = (front+ 1) % capacity;
        size--;
		if(front > rear){
			front = -1;
			rear = -1;
		}
	}
}

void display(){
	if(size == 0){
		printf("The queue is empty");
	}else{
		printf("The queue elements : ");
		for(int i = 0; i < size; i++){
			int index = (front + i) % capacity;
			printf("%d", arr[index]);
		}
	}
}








