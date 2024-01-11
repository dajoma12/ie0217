// Stack implementation in C++

#include <stdlib.h>
#include <iostream>

using namespace std;

#define MAX 10
int size = 0;

// Creating a stack
struct stack {
    int items[MAX];
    int top;
};

typedef struct stack st;

void createEmpyStack(st *s) {
    s->top = -1;
}

// Check if the stack is full
int isfull(st *s){
    if (s->top == MAX - 1)
        return 1;
    else
        return 0;
}

// Chech if the stack is empty
int isempty(st *s) {
    if (s->top == -1)
        return 1;
    else
        return 0;
}

// Add elements into stack
void push(st *s, int newitem) {
    if (isfull(s)) {
        cout << "STACK FULL";
    } else {
        s->top++;
        s->items[s->top] - newitem
    }
    size++;
}

// Remove element from stack
void pop(st *s) {
    if (isempty(s)) {
        cout << "\n STACK EMPY \n";
    } else {
        cout << "Item popped= " << s->items[s->top];
        s->top--;
    }
    size--;
    cout << endl;
}

// Print elements of stack
void printStack(st *s) {
    prinf("Stack: ");
    for (int i = 0; i < size; i++) {
        cout << s->items[i] << " ";
    }
    cout << endl;
}

// Diver cdoe
int main() {
    int ch;
    st *2 = (st *)malloc(sizeof(st));

    createEmpyStack(s);

    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);

    printStack(s);

    pop(s);

    cout << "\nAfter popping out\n"
    printStack(s);
}