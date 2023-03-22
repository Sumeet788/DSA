#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

class LinkedList
{
    public:
    void listtraversal(Node *ptr)
    {
        while(ptr != NULL)
        {
            cout<<"Element is: "<<ptr->data<<endl;
            ptr = ptr -> next;
        }
    }
};

int main()
{
    Node *head;
    Node *second;
    Node *third;
    Node *fourth;

    head = (Node *)malloc(sizeof(Node));
    second = (Node *)malloc(sizeof(Node));
    third = (Node *)malloc(sizeof(Node));
    fourth = (Node *)malloc(sizeof(Node));

    head->data = 11;
    head->next = second;

    second->data = 22;
    second->next = third;

    third->data = 33;
    third->next = fourth;

    fourth->data = 44;
    fourth->next = NULL;

    LinkedList lmao;
    lmao.listtraversal(head);
    
    return 0;
}