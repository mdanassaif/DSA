#include <stdio.h>

void push();
void display();
void pop();

int top = -1;
int capacity = 5;
int stack[5];

int main() {
    int choice;
    int continueChoice = 1;

    while(continueChoice) {
        printf("1. Push\n2. Pop\n3. Display\nEnter choice (1-3): ");
        scanf("%d", &choice);

        switch (choice) { 
            case 1:
                push();
                // printf("You choose push\n");
                break;
            case 2:
                pop();
                // printf("You choose pop\n"); 
                break;
            case 3:
                display();
                // printf("You choose display\n");  
                break;
            default:
                printf("Please choose between 1-3\n");      
        }
        
        printf("Want to continue? (1 for yes, 0 for no): ");
        scanf("%d", &continueChoice);
    }

    return 0;
}

void push(){
	if(top == capacity-1){
		printf("The stack is full");
	}else{
		top = top + 1;
		printf("Write your element to insert == ");
		scanf("%d", &stack[top]);
		
	}
	printf("\n");
}

void pop(){
	if(top == -1){
		printf("The stack is empty");
	}else{
		printf("The popped element is %d", stack[top]);
		top = top -1;
	}
}

void display(){
	if(top == -1){
		printf("The stack is empty");
	}else{
		for(int i = 0; i <= top; i++){
			printf("%d\t",stack[i]);
		}

	}
	printf("\n");
}