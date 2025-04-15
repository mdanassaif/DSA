#include <stdio.h>
void enque();
void deque();
void display();
int main(){
	

int rear = -1;
int front = -1;
int que[5];
int capacity = 5;
int repeat = 1, choice;


	while(repeat){

		printf("Write your choice == ");
		scanf("%d",&choice);


		switch(choice){
		case 1:
			enque();
			break;
	    case 2:
	        deque();
	        break;
	    case 3:
	        display();
	        break;   
	    default:
	        printf("Pleas write b/w 1-3");     		
		}

		printf("want to continue?");
		scanf("%d", &repeat);
	}
	return 0;
}


void enque(){
	if(rear == capacity -1){
		printf("Queue is full");
	}else{
		if(front == -1) front = 0;
		rear = rear + 1;
		printf("Enter your element");
		rear = rear + 1;
		scanf("%d", &arr[rear]);
	}
}

void deque(){
	printf("Bye");
}

void display(){
	printf("nono");
}