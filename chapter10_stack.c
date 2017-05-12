#include <stdio.h>

#define STACK_SIZE 100
#define TRUE 1
#define FALSE 0

typedef int Bool;

int contents[STACK_SIZE];  /* external */
int top = 0;			   /* external */

void make_empty(void) {
	top = 0;
}

Bool is_empty(void) {
	return top == 0;
}

Bool is_full(void) {
	return top == STACK_SIZE;
}

void push(int i) {
	if (is_full())
	    stack_overflow();
	else
	    contents[top++] = i;
}

int pop(void) {
	if (is_empty())
	    stack_underflow();
	else
	    return contents[--top];
}

int main() {
	make_empty();
	push(1);
	push(5);
	push(10);
	
	printf("There is %d items in stack.", &top);
	return 0;
}
