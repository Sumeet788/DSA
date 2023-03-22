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
    void traverse(Node *ptr)
    {
        while (ptr != NULL)
        {
            cout << "Element is : " << ptr->data << endl;
            ptr = ptr->next;
        }
    }

    Node * insert_at_begin(Node *head, int data)
    {
        Node *ptr = (Node *)malloc(sizeof(Node));
        ptr->next = head;
        ptr->data = data;

        return ptr;
    }

    Node * insert_at_index(Node *head, int data, int index)
    {
        Node *ptr = (Node *) malloc(sizeof(Node));
        Node *p = head;
        int i=0;

        while(i != index-1)
        {
            p = p->next;
            i++;
        }
        ptr->data = data;
        ptr->next = p->next;
        p->next = ptr;

        return head;   
    }

    Node * insert_at_end(Node *head,int data)
    {
        Node *ptr = (Node *)malloc(sizeof(Node));
        Node *p = head;

        ptr -> data = data;

        while(p->next != NULL)
        {
            p = p -> next;        
        }   
        p -> next = ptr;
        ptr -> next = NULL;

        return head;
    }

    Node * insert_after_node(Node *head, Node *prevnode, int data)
    {
        Node *ptr = (Node *) malloc(sizeof(Node));
        
        ptr -> data = data;
        
        ptr->next = prevnode -> next;
        prevnode->next = ptr;

        return head;

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

    head->data = 7;
    head->next = second;

    second->data = 14;
    second->next = third;

    third->data = 21;
    third->next = fourth;

    fourth->data = 28;
    fourth->next = NULL;

    LinkedList lmao;
    cout<<"Elements before insertion: "<<endl;
    lmao.traverse(head);
    cout<<endl;

    cout << "Elements after insertion at first: " << endl;
    head = lmao.insert_at_begin(head, 56);
    lmao.traverse(head);
    cout<<endl;

    cout<<"Elements after insertion in between: "<<endl;
    head = lmao.insert_at_index(head,77,3);
    lmao.traverse(head);
    cout<<endl;

    cout<<"Elements after insertion at end: "<<endl;
    head = lmao.insert_at_end(head,36);
    lmao.traverse(head);
    cout<<endl;

    cout<<"Elements after insertion after node: "<<endl;
    head = lmao.insert_after_node(head,second,50);
    lmao.traverse(head);
    cout<<endl;

    return 0;
} 