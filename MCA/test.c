/*
What is a Stack ?

A stack is a data structure that follows the LIFO [ List In, First Out ]

Think of it like stack of plates: you add new plates to the top and when you want a plate, you take it from the top as well. 

*/

#include <stdio.h>
// #include <conio.h> 

void push();
void pop();
void display();

int top = -1;
int capacity=10;
int stack[10];

int main(){
    int input, choice;

    while(input){
        printf("\n1. Push Elem\n");
        printf("2. Pop Elem\n");
        printf("3. Display Stack\n");
        printf("Choose what you want to do = ");
        scanf("%d", &choice);

        switch (choice)
        {
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
            break;
        }

        printf("\nDo you want to continue == ");
        scanf("%d", &input);  

    }

return 0;
}



void push(){
    if(top == capacity){
        printf("Stacks is full\n");
    }else{
        top = top +1;
        printf("Please an element  = ");
        scanf("%d", &stack[top]);
    }

}

void pop(){

}

void display(){
    int i;
    if(top == -1){
        printf("Stack is empty");
    }else{
        for(i = top; i >= 0; i--){  
            printf("%d ", stack[i]);  
        }
    }

}