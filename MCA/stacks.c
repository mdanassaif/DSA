/*
Stacks : Last In, First Out (LIFO)


*/

#include <stdio.h>

void push();
void pop();
void display();

int top = -1; // index of the topmost element
int capacity=10; // Defines the maximum size of the stack
int stack[10]; // Holds the actual elements of the stack

int main(){

int repeat =1, choice;

while(repeat){
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
      printf("Please choose correctly\n");
      break;
}

printf("Do you want to continue \n");
scanf("%d", &repeat);
}

return 0;
}


//When you push 40, it goes into stack[2], overwriting the old value (30) that was there. The previous "popped" element (30) is no longer part of the stack, and the new push simply reuses that memory location.
void push(){
      if(top == capacity){
            printf("Stack is full");
      }else {
            top = top + 1;
            printf("Write the element for insert");
            scanf("%d", stack[top]);
      }
}


//The element itself isn’t erased from memory—it’s just no longer considered part of the stack.

//The removal is logical, not physical. The stack array keeps all values in memory, but top defines which elements are part of the stack.


void pop(){
      if(top==-1){
            printf("The stack is empty");
      }else{
            printf("Popped elem is %d", stack[top]);
            top = top -1;
      }
}

//

void display(){
int i;
if(top ==  -1){
printf("Stack is empty");
}else{
for(i = top; i>=0; i--){
printf("%d\t", stack[i]);
}
}}