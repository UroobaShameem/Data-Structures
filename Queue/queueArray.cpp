#include<iostream>
using namespace std;

struct queue //queue structure
{
    int front;
    int back;
    int size;
    int* arr;
};

void isEmpty(queue *ptr) //check if queue is empty
{
    if(ptr->front == -1 || ptr->front > ptr->back) //if front is -1 or front greater than back
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"Queue is not empty"<<endl;
    }
}

void Enqueue(queue *ptr, int val) //inserting element
{
    if(ptr->back == ptr->size-1){  //if back is on last emement
        cout<<"Queue is full"<<endl;
    }
    else {
        ptr->back++; //increment back
        ptr->arr[ptr->back] = val; //insert value in array at back pointer
        if(ptr->front == -1){ //if front is -1 then increment front
            ptr->front++;
        }
    }
}

void Dequeue(queue *ptr) //delete element
{
    if(ptr->front == -1 || ptr->front > ptr->back) //checking if queue is empty
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"Dequeued element is "<<ptr->arr[ptr->front]<<endl; //print element at front
        ptr->front++; //increment front to second element
    }
}

int main() {
    struct queue q;
    q.front = -1; //initializing front
    q.back = -1; //initializing back
    int n;
    cout<<"Enter the size of the queue: "; //taking size of queue
    cin>>n;
    q.size = n;
    q.arr = new int[q.size]; //creating array of size n
    cout << "Queue created successfully" << endl;
    isEmpty(&q); //checking if queue is empty
    Enqueue(&q, 10); //inserting element
    Enqueue(&q, 20);
    Enqueue(&q, 30);
    Enqueue(&q, 40);
    isEmpty(&q); //checking if queue is empty
    Dequeue(&q); //deleting element
    Dequeue(&q);
    Dequeue(&q);
    Dequeue(&q);
    return 0;

}