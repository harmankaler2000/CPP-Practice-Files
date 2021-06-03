#include <bits/stdc++.h>
using namespace std;
 
class Node
{
    public:
    int data;
    Node* next;
    Node* prev;
};
 
void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    new_node->prev = NULL;
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;
    (*head_ref) = new_node;
}

void append(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
 
    Node* last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
    {
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }
 
    while (last->next != NULL)
        last = last->next;
 
    last->next = new_node;
 
    new_node->prev = last;
 
    return;
}
 
void printList(Node* node)
{
    Node* last;
    while (node != NULL)
    {
        cout<<" "<<node->data<<" ";
        last = node;
        node = node->next;
    }
 
}
 
int main()
{
    Node* head = NULL;
 
    append(&head, 6);
 
    push(&head, 7);
 
    push(&head, 1);
 
    append(&head, 4);
 
 
    cout << "Created DLL Stack is: ";
    printList(head);
 
    return 0;
}
 