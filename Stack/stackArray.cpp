#include<iostream>
using namespace std;

struct stack{ //stack structure
    int size;
    int top;
    int *arr;
};

void isEmpty(struct stack *ptr){
    if(ptr->top == -1){   //if top index is -1 then stack is empty
        cout<<"Stack is empty"<<endl; 
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
}

void isFull(struct stack *ptr){
    if(ptr->top == ptr->size-1){  //if top index is equal to size-1 then stack is full
        cout<<"Stack is full"<<endl;
    }
    else{
        cout<<"Stack is not full"<<endl;
    }
}

void push(struct stack *ptr, int value)
{
        ptr->top++; //increment top index
        ptr->arr[ptr->top] = value; //insert value at top index
}

void pop(struct stack *ptr)
{
    int val = ptr->arr[ptr->top]; //store top value in val
    ptr->top--; //decrement top index
    cout<<"The value popped out is "<<val<<endl;
}

int main()
{
   struct stack myStack; // creating a stack
    int n;
    cout<<"Enter the size of stack: "; //enter size of stack
    cin>>n;
    myStack.size = n; //assigning size to stack
    myStack.top = -1; //initially top index is -1
    myStack.arr = (int *) malloc(myStack.size * sizeof(int)); //allocating memory to stack

    int i;
    for(i=0; i<myStack.size; i++)
    {
        cout<<"Enter Element: ";
        cin>>myStack.arr[i];
        push(&myStack , myStack.arr[i]);
    }
    isFull(&myStack);

    for(i=0; i<myStack.size; i++)
    {
        pop(&myStack);
    }

    isEmpty(&myStack);
    return 0;
}