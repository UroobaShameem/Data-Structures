#include<iostream>
using namespace std;

struct node //node structure
{
    int data; //data part
    struct node *next; //pointer part
};

void traversal(struct node *ptr) //function to traverse list
{
    while(ptr != NULL) //values will be printing until ptr is not null/on last node
    {
        cout<<"Element: "<<ptr->data<<endl; //printing data
        ptr=ptr->next; //moving to next node
    }
}

int main()
{
    
    struct node *head; //head pointer
    struct node *second; //second pointer
    struct node *third; //third pointer

    head = (struct node*)malloc(sizeof(struct node)); //allocating memory to head pointer
    second = (struct node*)malloc(sizeof(struct node)); //allocating memory to second pointer
    third = (struct node*)malloc(sizeof(struct node)); //allocating memory to third pointer

    head->data = 1; //assigning data to head pointer
    head->next = second; //assigning address of second pointer to head pointer

    second->data = 2; //assigning data to second pointer
    second->next = third; //assigning address of third pointer to second pointer

    third->data = 3; //assigning data to third pointer
    third->next = NULL; //this is last node so next pointer will be null

    traversal(head); //calling traversal function
    return 0;
}