#include <iostream>

using namespace std;

struct Node
{

    int data;

    Node *next;
};

Node *head = nullptr;

// Function to insert node in LL

void insert(int data)
{

    Node *newNode = new Node();

    newNode->data = data;

    newNode->next = head;

    head = newNode;
}
// function to delete node of LL

void deleteNode(int data)
{

    Node *temp = head, *prev = nullptr;

    if (temp != nullptr && temp->data == data)
    {

        head = temp->next;

        delete temp;

        return;
    }

    while (temp != nullptr && temp->data != data)
    {

        prev = temp;

        temp = temp->next;
    }

    if (temp == nullptr)

        return;

    prev->next = temp->next;

    delete temp;
}

// function to print LL

void printList()
{

    Node *temp = head;

    while (temp != nullptr)
    {

        cout << temp->data << " ";

        temp = temp->next;
    }

    cout << endl;
}

int main()
{

    insert(1);

    insert(2);

    insert(3);

    insert(4);

    insert(5);

    cout << "Linked List is \n";

    printList();

    deleteNode(3);

    cout << "Linked List after deletion of 3: ";

    printList();

    return 0;
}