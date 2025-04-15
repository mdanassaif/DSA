//// stack implementation : FIFO

#include <stdio.h>

void push();
void pop();
void display();


    int top = -1;
	int capacity = 5;
	int stack[5];
	 

int main(){

	
	int continueChoice = 1;
	int choice;


 

	while(continueChoice){


		printf("|||| Slect what do you want ||||\n");
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Display\n");

		scanf("%d", &choice);

		switch(choice){
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		default:
			printf("Please choose between 1-3\n");
		}

		printf("Do you want to continue = ");
		scanf("%d", &continueChoice);

	}


 
return 0;

}


void push(){
 

	if(top == capacity -1){
		printf("Stack is full.");
	} else{
		top = top + 1;
		printf("Enter your element to push == ");
		scanf("%d", &stack[top]);
	}
	printf("\n");
}

void pop(){
	if(top == -1){
		printf("Stack is empty");
	}else{
		printf("The popped element is %d\n", stack[top]);
		top = top -1;
	}
}

void display(){

	if(top == -1){
		printf("Stack is empty");
	}else{
		for(int i = 0; i <= top; i++){
		printf("%d\t", stack[i]);
	}
	}
		printf("\n");
}


