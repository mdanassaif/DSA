#include <stdio.h>

void insert();
void delete();
void display();

int rear = -1;
int front = -1;
int queue[5];
int capacity = 5;
int size = 0;

int main(){
	
	int repeat = 1;
	int choice;

	while(repeat){
        
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");

        printf("Choose your choice\n");
        scanf("%d", &choice);

		switch(choice){
		case 1:
			insert();
			break;
		case 2:
		    delete();
		    break;
		case 3: 
		    display();
		    break;
		default:
		    printf("Choose only b/w 1-3\n");        	
		}

		printf("Do you want to continue : 1/0 === ");
		scanf("%d", &repeat);
	}
	return 0;
}



 

void insert(){
	if(size == capacity){
		printf("The queue is full\n");
	}else {
		if ( front == -1) front = 0;
		rear = (rear + 1) % capacity;
		printf("Enter an element==");
		scanf("%d",&queue[rear]);
		size++;
		printf("Element inserted successfully.\n");
	}
}


void delete(){
	if(size == 0){
		printf("The queue is empty\n");
	}else{
			printf("You deleted %d element\n", queue[front]);
		 front = (front + 1) % capacity;
        size--;
	
	}
}


void display(){
	if(size == 0){
		printf("The queue is empty\n");
	}else{
		for(int i = 0; i < size; i++){
			int index = (front+i) % capacity;
			printf("%d\t", queue[index]);
		}
		printf("\n");
	}
}