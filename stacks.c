#include <stdio.h>

void push();
void pop();
void display();

int top = -1;
int capacity=10;
int stack[10];

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

void push(){

if(top == capacity){
printf("Stacks is full\n");
} else {
top = top+1;
printf("Enter an element\n");
scanf("%d", &stack[top]);
}
}

void pop(){

if(top == -1){
printf("Stack is empty\n");
}else{
printf("Popped elem is %d", stack[top]);
top = top -1;
}}

void display(){
int i;
if(top ==  -1){
printf("Stack is empty");
}else{
for(i = top; i>=0; i--){
printf("%d\t", stack[i]);
}
}}