#include <stdio.h>

void enqueue();
void dequeue();
void display();

int front = -1;
int rear = -1;
int capacity = 5;
int queue[5];


int main(){

	int repeat = 1;
	int choice;


	
	while(repeat){
			printf("----------------\n");
			printf("1. Enqueue\n");
			printf("2. Dequeue\n");
			printf("3. Display\n");
			printf("----------------\n");

			printf("Please choose your choice == ");
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
			printf("Choose b/w only 1-3\n");
		}

		printf("Would you like to continue == ");
		scanf("%d", &repeat);
	}

}


void enqueue(){
     if(rear == capacity -1){
     	printf("The Queue is full\t");
     }else{
     	if(front == -1) {front = 0;};
     	rear = rear + 1;
     	printf("Write your element to insert == ");
     	scanf("%d", &queue[rear]);
     }
     printf("\t");
	};

void dequeue(){
     if(front == -1){
     	printf("The Queue is empty\t");
     }else{
     	 if(front == 0 && rear ==0){
     	 	rear = rear -1;
     	 	front = front - 1;
     	 } else{
     	 	for(int i = 0; i < rear; i++){
     	 		printf("The dequeued element is %d\n", queue[front]);
     	 		queue[i] = queue[i+1];

     	 	}
     	 	rear = rear -1;
     	 }
     }
	};

void display(){
     if(front == -1 ){
     	printf("The queue is empty\t");
     }else{
     	for(int i = 0; i <= rear; i++){
     		printf("%d\t", queue[i]);
     	}
     }
     printf("\n");
	};