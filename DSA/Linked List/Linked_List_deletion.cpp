#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

class linkedlist
{
    public:
    void traverse(Node *ptr)
    {
        while(ptr != NULL)
        {
            cout<<"Element is: "<< ptr->data <<endl;
            ptr = ptr -> next;    
        }
    }

    Node * deletion_at_the_begin(Node *head)
    {
        Node *ptr = head;
        head = head -> next;
        free(ptr);
        return head;
    }

    Node * deletion_at_index(Node *head,int index)
    {
        Node *p = head;
        Node *q = head -> next;
        int i=0;

        while(i < index-1)
        {
            p = p -> next;
            q = q -> next;
            i++;

        }
        p -> next = q -> next;
        free(q);

        return head;
    }

    Node * deletion_at_last(Node *head)
    {
        Node *p = head;
        Node *q = head->next;
        int i=0;

        while(q->next != NULL)
        {
            p = p->next;
            q = q->next;
            i++;
        }
        p->next = NULL;
        free(q);

        return head;
    }

    Node * deletion_at_node_with_given_value(Node *head,int value)
    {
        Node *p = head;
        Node *q = head->next;
        int i=0;

        while(q->data != value && q->next != NULL)
        {
            p = p->next;
            q = q->next;
        }

        if(q->data == value)
        {
            p->next = q->next;
            free(q);
        }
        return head;
    }  
};


int main()
{
    Node *head;
    Node *second;
    Node *third;
    Node *fourth;
    Node *fifth;
    Node *sixth;
    Node *seventh;

    head = (Node *) malloc (sizeof(Node));
    second = (Node *) malloc (sizeof(Node));
    third = (Node *) malloc (sizeof(Node));
    fourth = (Node *) malloc (sizeof(Node));
    fifth = (Node *) malloc (sizeof(Node));
    sixth = (Node *) malloc (sizeof(Node));
    seventh = (Node *) malloc (sizeof(Node));

    head->data = 10;
    head ->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = fifth;

    fifth->data = 50;
    fifth->next = sixth;

    sixth->data=60;
    sixth->next=seventh;

    seventh->data=70;
    seventh->next=NULL;

    linkedlist monkey;
    cout<<"Before Deletion"<<endl;
    monkey.traverse(head); 
    cout<<endl;

    cout<<"After Deletion at begin: "<<endl;
    head = monkey.deletion_at_the_begin(head);
    monkey.traverse(head);
    cout<<endl;

    cout<<"After Deletion in between: "<<endl;
    head = monkey.deletion_at_index(head,2);
    monkey.traverse(head);
    cout<<endl;

    cout<<"After Deletion at end: "<<endl;
    head = monkey.deletion_at_last(head);
    monkey.traverse(head);
    cout<<endl;
 
    cout<<"After Deletion at node with given value: "<<endl;
    head = monkey.deletion_at_node_with_given_value(head,30);
    monkey.traverse(head);
    cout<<endl;

    return 0;
}