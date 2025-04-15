#include <stdio.h>
// #include <conio.h>

int front = -1;
int rear = -1;
int capacity = 5;
int queue[5];
void enque();
void deque();
void display();

int repeat = 1, choice;
int main()
{
	// clrscr(); // Using this because of the Turbo C.
	while (repeat)
	{
		printf("Choose an option\n");
		printf("1. Insert\n");
		printf("2. Delete\n");
		printf("3. Front\n");
		printf("4. Rear\n");
		printf("5. Display\n");

		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			enque();
			// clrscr(); // clearing every time while calling the function.
			break;
		case 2:
			deque();
			// clrscr();
			break;
		case 3:
			printf("\nFront element is: %d", queue[front]);
			break;
		case 4:
			printf("\nRear element is: %d", queue[rear]);
			break;
		case 5:
			display();
			break;
		default:
			printf("\nInvalid input\n");
		}
		printf("\nWant to continue 0/1 ");
		scanf("%d", &repeat);
	}
	return 0;
}
void enque()
{
	if (rear == capacity - 1)
	{
		printf("\nQueue is Full\n");
	}
	else
	{
		rear++;
		printf("\nEnter the no: ");
		scanf("%d", &queue[rear]);
		if (front == -1)
		{
			front++;
		}
		printf("%d is inserted successfully\n", queue[rear]);
	}
}
void deque()
{
	if (rear == -1)
	{
		printf("\nQueue is empty\n");
	}
	else
	{
		printf("\n%d is deleted\n", queue[front]);
	}
	if (rear == 0 && front == 0)
	{
		// queue[front] = NULL;
		front--;
		rear--;
	}
	else
	{
		// queue[front] = NULL;
		int i;
		for (i = 0; i < rear; i++)
		{
			queue[i] = queue[i + 1];
		}
		rear--;
	}
}
void display()
{
	if (rear == -1)
	{
		printf("\nQueue is empty\n");
	}
	else
	{
		int i;
		printf("\nQueue elements are : ");
		for (i = 0; i <= rear; i++)
		{
			printf("%d\t", queue[i]);
		}
		printf("\n");
	}
}