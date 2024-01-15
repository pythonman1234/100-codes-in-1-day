#include <iostream>

struct Node
{

    int data;

    Node *next;
};

class CircularLinkedList
{

private:
    Node *head;

public:
    CircularLinkedList()

        : head(NULL)

    {
    }

    void insertAtStart(int data)

    {

        Node *newNode = new Node;

        newNode->data = data;

        newNode->next = head;

        if (head == NULL)
        {

            head = newNode;

            newNode->next = head;
        }

        else
        {

            Node *temp = head;

            while (temp->next != head)

                temp = temp->next;

            temp->next = newNode;

            head = newNode;
        }
    }

    void deleteNode(int data)

    {

        Node *temp = head;

        if (temp == NULL)

            return;

        if (temp->next == head)
        {

            head = NULL;

            delete temp;

            return;
        }

        Node *prev = NULL;

        while (temp->next != head && temp->data != data)
        {

            prev = temp;

            temp = temp->next;
        }

        if (temp->data != data)

            return;

        prev->next = temp->next;

        if (temp == head)

            head = temp->next;

        delete temp;
    }

    void printList()

    {

        Node *temp = head;

        while (temp->next != head)
        {

            std::cout << temp->data << " ";

            temp = temp->next;
        }

        std::cout << temp->data << std::endl;
    }
};

int main()
{

    CircularLinkedList cll;

    cll.insertAtStart(1);

    cll.insertAtStart(2);

    cll.insertAtStart(3);

    cll.insertAtStart(4);

    cll.insertAtStart(5);

    std::cout << "Original Circular Linked list ";

    cll.printList();

    cll.deleteNode(2);

    std::cout << "Circular Linked List after deletion ";

    cll.printList();

    return 0;
}