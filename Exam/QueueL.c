#include <stdio.h>

void enqueue();
void dequeue();
void display();



int front = -1;
int rear = -1;
int arr[5];
int capacity = 5;


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
	if(rear == capacity - 1){
		printf("The queue is full\n");
	}else{
		if(front == -1){front = 0;}

		rear = rear + 1;
		printf("Write your element to insert == ");
		scanf("%d", &arr[rear]);
		printf("Element %d enqueued\n", arr[rear]);
	}
}

void dequeue(){
	if(front == -1 || front > rear){
		printf("The queue is empty");
	}else{
		printf("The dequeued element is %d\n", arr[front]);
		front = front+ 1;

		if(front > rear){
			front = -1;
			rear = -1;
		}
	}
}

void display(){
	if(front == -1 || front > rear){
		printf("The queue is empty");
	}else{
		printf("The queue elements : ");
		for(int i = front; i <= rear; i++){
			printf("%d", arr[i]);
		}
	}
}








