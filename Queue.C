void enque();
void display();
void deque();
int front = -1;
int rear=-1;
int que[10];
int capacity = 5;


void main()
{
int repeat=1,choice;
clrscr();
while(repeat)
{
printf("-------------------------\n");
printf("IIIII   1. Enque          IIIIIII\n");
printf("IIIII   2. Deque          IIIIIII\n");
printf("IIIII   3. Display        IIIIIII\n");
printf("IIIII   4. Front Element  IIIIIII\n");
printf("IIIII   5. Rear Element   IIIIIII\n");
printf("-------------------------\n");
printf("-------------------------\n");

printf("ENTER YOUR CHOICE ==== ");
scanf("%d", &choice);

switch(choice){

case 1:
      enque();
      clrscr();
      break;
case 2:
      deque();
      break;

case 3:
      display();
      break;
case 4:
      printf("The front value of Queue is : %d", que[front]);
      break;
case 5:
      printf("The rear value of Queue is : %d", que[rear]);
      break;
default:
      printf("Please choose correctly : )\n");
      break;
}

printf("\nDo you want to continue 1/0 == ");
scanf("%d", &repeat);
}
}

void enque(){

if(rear == capacity -1){
printf("Queue is full\n");
} else {
if ( front == -1){
front = 0;
}
rear = rear+1;
printf("Enter an element == ");
scanf("%d", &que[rear]);
}
}

void display(){
int i;
if(rear ==  -1&& front == -1){
printf("Queue is empty\n");
}else{
for(i = 0; i<=rear; i++){
printf("%d\t", que[i]);
}
}}

void deque(){

if(front ==-1){
printf("Queue is empty\n");
}else{
printf("Dequed elem is == ", que[front]);
front = front +1;
if(front > rear){
front = rear -1;
}
}}